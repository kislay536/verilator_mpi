// -*- mode: C++; c-file-style: "cc-mode" -*-
//*************************************************************************
// DESCRIPTION: Verilator: Emit C++ for tree
//
// Code available from: https://verilator.org
//
//*************************************************************************
//
// Copyright 2003-2025 by Wilson Snyder. This program is free software; you
// can redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.
// SPDX-License-Identifier: LGPL-3.0-only OR Artistic-2.0
//
//*************************************************************************

#include "V3PchAstMT.h"

#include "V3EmitCFunc.h"

#include "V3TSP.h"

#include <map>
#include <vector>

// We use a static char array in VL_VALUE_STRING
constexpr int VL_VALUE_STRING_MAX_WIDTH = 8192;

//######################################################################
// EmitCFunc

bool EmitCFunc::emitSimpleOk(AstNodeExpr* nodep) {
    // Can we put out a simple (A + B) instead of VL_ADD_III(A,B)?
    if (nodep->emitSimpleOperator() == "") return false;
    if (nodep->isWide()) return false;
    if (nodep->op1p() && nodep->op1p()->isWide()) return false;
    if (nodep->op2p() && nodep->op2p()->isWide()) return false;
    if (nodep->op3p() && nodep->op3p()->isWide()) return false;
    return true;
}

void EmitCFunc::emitOpName(AstNode* nodep, const string& format, AstNode* lhsp, AstNode* rhsp,
                           AstNode* thsp) {
    // Look at emitOperator() format for term/uni/dual/triops,
    // and write out appropriate text.
    //  %n*     node
    //   %nq      emitIQW on the [node]
    //   %nw      width in bits
    //   %nW      width in words
    //   %ni      iterate
    //  %l*     lhsp - if appropriate, then second char as above
    //  %r*     rhsp - if appropriate, then second char as above
    //  %t*     thsp - if appropriate, then second char as above
    //  %k      Potential line break
    //  %P      Wide temporary name
    //  ,       Commas suppressed if the previous field is suppressed
    string nextComma;
    bool needComma = false;
#define COMMA \
    do { \
        if (!nextComma.empty()) { \
            puts(nextComma); \
            nextComma = ""; \
        } \
    } while (false)

    putnbs(nodep, "");
    for (string::const_iterator pos = format.begin(); pos != format.end(); ++pos) {
        if (pos[0] == ',') {
            // Remember we need to add one, but don't do yet to avoid ",)"
            if (needComma) {
                if (pos[1] == ' ') {
                    nextComma = ", ";
                } else {
                    nextComma = ",";
                }
                needComma = false;
            }
            if (pos[1] == ' ') ++pos;  // Must do even if no nextComma
        } else if (pos[0] == '%') {
            ++pos;
            bool detail = false;
            AstNode* detailp = nullptr;
            switch (pos[0]) {
            case '%': puts("%"); break;
            case 'k': putbs(""); break;
            case 'n':
                detail = true;
                detailp = nodep;
                break;
            case 'l':
                detail = true;
                detailp = lhsp;
                break;
            case 'r':
                detail = true;
                detailp = rhsp;
                break;
            case 't':
                detail = true;
                detailp = thsp;
                break;
            case 'P':
                if (nodep->isWide()) {
                    UASSERT_OBJ(m_wideTempRefp, nodep,
                                "Wide Op w/ no temp, perhaps missing op in V3EmitC?");
                    COMMA;
                    if (!m_wideTempRefp->selfPointer().isEmpty()) {
                        emitDereference(m_wideTempRefp,
                                        m_wideTempRefp->selfPointerProtect(m_useSelfForThis));
                    }
                    puts(m_wideTempRefp->varp()->nameProtect());
                    m_wideTempRefp = nullptr;
                    needComma = true;
                }
                break;
            default: nodep->v3fatalSrc("Unknown emitOperator format code: %" << pos[0]); break;
            }
            if (detail) {
                // Get next letter of %[nlrt]
                ++pos;
                switch (pos[0]) {
                case 'q': emitIQW(detailp); break;
                case 'w':
                    COMMA;
                    puts(cvtToStr(detailp->widthMin()));
                    needComma = true;
                    break;
                case 'W':
                    if (lhsp->isWide()) {
                        COMMA;
                        puts(cvtToStr(lhsp->widthWords()));
                        needComma = true;
                    }
                    break;
                case 'i':
                    COMMA;
                    UASSERT_OBJ(detailp, nodep, "emitOperator() references undef node");
                    iterateAndNextConstNull(detailp);
                    needComma = true;
                    break;
                default:
                    nodep->v3fatalSrc("Unknown emitOperator format code: %[nlrt]" << pos[0]);
                    break;
                }
            }
        } else if (pos[0] == ')') {
            nextComma = "";
            puts(")");
        } else if (pos[0] == '(') {
            COMMA;
            needComma = false;
            puts("(");
        } else {
            // Normal text
            if (std::isalnum(pos[0])) needComma = true;
            COMMA;
            string s;
            s += pos[0];
            puts(s);
        }
    }
}

void EmitCFunc::displayEmit(AstNode* nodep, bool isScan) {
    if (m_emitDispState.m_format == ""
        && VN_IS(nodep, Display)) {  // not fscanf etc, as they need to return value
        // NOP
    } else {
        // Format
        bool isStmt = false;
        if (const AstFScanF* const dispp = VN_CAST(nodep, FScanF)) {
            isStmt = false;
            putns(nodep, "VL_FSCANF_INX(");
            iterateConst(dispp->filep());
            puts(",");
        } else if (const AstSScanF* const dispp = VN_CAST(nodep, SScanF)) {
            isStmt = false;
            checkMaxWords(dispp->fromp());
            putns(nodep, "VL_SSCANF_I");
            emitIQW(dispp->fromp());
            puts("NX(");
            puts(cvtToStr(dispp->fromp()->widthMin()));
            puts(",");
            iterateConst(dispp->fromp());
            puts(",");
        } else if (const AstDisplay* const dispp = VN_CAST(nodep, Display)) {
            isStmt = true;
            if (dispp->filep()) {
                putns(nodep, "VL_FWRITEF_NX(");
                iterateConst(dispp->filep());
                puts(",");
            } else {
                putns(nodep, "VL_WRITEF_NX(");
            }
        } else if (const AstSFormat* const dispp = VN_CAST(nodep, SFormat)) {
            isStmt = true;
            puts("VL_SFORMAT_NX(");
            puts(cvtToStr(dispp->lhsp()->widthMin()));
            putbs(",");
            iterateConst(dispp->lhsp());
            putbs(",");
        } else if (VN_IS(nodep, SFormatF)) {
            isStmt = false;
            putns(nodep, "VL_SFORMATF_N_NX(");
        } else {
            nodep->v3fatalSrc("Unknown displayEmit node type");
        }
        ofp()->putsQuoted(m_emitDispState.m_format);
        ofp()->puts(",0");  // MSVC++ requires va_args to not be off reference
        // Arguments
        for (unsigned i = 0; i < m_emitDispState.m_argsp.size(); i++) {
            const char fmt = m_emitDispState.m_argsChar[i];
            AstNode* const argp = m_emitDispState.m_argsp[i];
            const string func = m_emitDispState.m_argsFunc[i];
            if (func != "" || argp) {
                puts(",");
                ofp()->indentInc();
                ofp()->putbs("");
                if (func != "") {
                    puts(func);
                } else if (argp) {
                    const bool addrof = isScan || (fmt == '@') || (fmt == 'p');
                    if (addrof) puts("&(");
                    iterateConst(argp);
                    if (!addrof) emitDatap(argp);
                    if (addrof) puts(")");
                }
                ofp()->indentDec();
            }
        }
        // End
        puts(")");
        if (isStmt) {
            puts(";\n");
        } else {
            puts(" ");
        }
        // Prep for next
        m_emitDispState.clear();
    }
}

void EmitCFunc::displayArg(AstNode* dispp, AstNode** elistp, bool isScan, const string& vfmt,
                           bool ignore, char fmtLetter) {
    // Print display argument, edits elistp
    AstNode* argp = nullptr;
    if (!ignore) {
        argp = *elistp;
        // Prep for next parameter
        *elistp = (*elistp)->nextp();
        if (VL_UNCOVERABLE(!argp)) {
            // expectDisplay() checks this first, so internal error if found here
            dispp->v3error(
                "Internal: Missing arguments for $display-like format");  // LCOV_EXCL_LINE
            return;  // LCOV_EXCL_LINE
        }
        if (argp->widthMin() > VL_VALUE_STRING_MAX_WIDTH) {
            dispp->v3error("Exceeded limit of " + cvtToStr(VL_VALUE_STRING_MAX_WIDTH)
                           + " bits for any $display-like arguments");
        }
        if (argp->widthMin() > 8 && fmtLetter == 'c') {
            // Technically legal, but surely not what the user intended.
            argp->v3warn(WIDTHTRUNC, dispp->verilogKwd() << "of %c format of > 8 bit value");
        }
    }
    // string pfmt = "%"+displayFormat(argp, vfmt, fmtLetter)+fmtLetter;
    string pfmt;
    if ((fmtLetter == '#' || fmtLetter == 'd') && !isScan
        && vfmt == "") {  // Size decimal output.  Spec says leading spaces, not zeros
        const double mantissabits = ignore ? 0 : (argp->widthMin() - ((fmtLetter == 'd') ? 1 : 0));
        // This is log10(2**mantissabits) as log2(2**mantissabits)/log2(10),
        // + 1.0 rounding bias.
        double dchars = mantissabits / 3.321928094887362 + 1.0;
        if (fmtLetter == 'd') dchars++;  // space for sign
        const int nchars = int(dchars);
        pfmt = "%"s + cvtToStr(nchars) + fmtLetter;
    } else {
        pfmt = "%"s + vfmt + fmtLetter;
    }
    m_emitDispState.pushFormat(pfmt);
    if (!ignore) {
        if (argp->dtypep()->basicp()
            && argp->dtypep()->basicp()->keyword() == VBasicDTypeKwd::STRING) {
            // string in SystemVerilog is std::string in C++ which is not POD
            m_emitDispState.pushArg(' ', nullptr, "-1");
        } else {
            m_emitDispState.pushArg(' ', nullptr, cvtToStr(argp->widthMin()));
        }
        m_emitDispState.pushArg(fmtLetter, argp, "");
        if (fmtLetter == 't' || fmtLetter == '^') {
            const AstSFormatF* fmtp = nullptr;
            if (const AstDisplay* const nodep = VN_CAST(dispp, Display)) {
                fmtp = nodep->fmtp();
            } else if (const AstSFormat* const nodep = VN_CAST(dispp, SFormat)) {
                fmtp = nodep->fmtp();
            } else {
                fmtp = VN_CAST(dispp, SFormatF);
            }
            UASSERT_OBJ(fmtp, dispp,
                        "Use of %t must be under AstDisplay, AstSFormat, or AstSFormatF");
            UASSERT_OBJ(!fmtp->timeunit().isNone(), fmtp, "timenunit must be set");
            m_emitDispState.pushArg(' ', nullptr, cvtToStr((int)fmtp->timeunit().powerOfTen()));
        }
    } else {
        m_emitDispState.pushArg(fmtLetter, nullptr, "");
    }
}

void EmitCFunc::displayNode(AstNode* nodep, AstScopeName* scopenamep, const string& vformat,
                            AstNode* exprsp, bool isScan) {
    AstNode* elistp = exprsp;

    // Convert Verilog display to C printf formats
    //          "%0t" becomes "%d"
    VL_RESTORER(m_emitDispState);
    m_emitDispState.clear();
    string vfmt;
    string::const_iterator pos = vformat.begin();
    bool inPct = false;
    bool ignore = false;
    for (; pos != vformat.end(); ++pos) {
        // UINFO(1, "Parse '" << *pos << "'  IP" << inPct << " List " << cvtToHex(elistp) << endl);
        if (!inPct && pos[0] == '%') {
            inPct = true;
            ignore = false;
            vfmt = "";
        } else if (!inPct) {  // Normal text
            m_emitDispState.pushFormat(*pos);
        } else {  // Format character
            inPct = false;
            switch (std::tolower(pos[0])) {
            case '0':  // FALLTHRU
            case '1':  // FALLTHRU
            case '2':  // FALLTHRU
            case '3':  // FALLTHRU
            case '4':  // FALLTHRU
            case '5':  // FALLTHRU
            case '6':  // FALLTHRU
            case '7':  // FALLTHRU
            case '8':  // FALLTHRU
            case '9':  // FALLTHRU
            case '.':  // FALLTHRU
            case '-':
                // Digits, like %5d, etc.
                vfmt += pos[0];
                inPct = true;  // Get more digits
                break;
            case '%':
                m_emitDispState.pushFormat("%%");  // We're printf'ing it, so need to quote the %
                break;
            case '*':
                vfmt += pos[0];
                inPct = true;  // Get more digits
                ignore = true;
                break;
            // Special codes
            case '~':
                displayArg(nodep, &elistp, isScan, vfmt, ignore, 'd');
                break;  // Signed decimal
            case '@':
                displayArg(nodep, &elistp, isScan, vfmt, ignore, '@');
                break;  // Packed string
            // Spec: h d o b c l
            case 'b': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'b'); break;
            case 'c': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'c'); break;
            case 't': displayArg(nodep, &elistp, isScan, vfmt, ignore, 't'); break;
            case 'd':
                displayArg(nodep, &elistp, isScan, vfmt, ignore, '#');
                break;  // Unsigned decimal
            case 'o': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'o'); break;
            case 'h':  // FALLTHRU
            case 'x': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'x'); break;
            case 'p': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'p'); break;
            case 's': displayArg(nodep, &elistp, isScan, vfmt, ignore, 's'); break;
            case 'e': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'e'); break;
            case 'f': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'f'); break;
            case 'g': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'g'); break;
            case '^': displayArg(nodep, &elistp, isScan, vfmt, ignore, '^'); break;  // Realtime
            case 'v': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'v'); break;
            case 'u': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'u'); break;
            case 'z': displayArg(nodep, &elistp, isScan, vfmt, ignore, 'z'); break;
            case 'm': {
                UASSERT_OBJ(scopenamep, nodep, "Display with %m but no AstScopeName");
                const string suffix = scopenamep->scopePrettySymName();
                if (suffix == "") {
                    m_emitDispState.pushFormat("%S");
                } else {
                    m_emitDispState.pushFormat("%N");  // Add a . when needed
                }
                m_emitDispState.pushArg(' ', nullptr, "vlSymsp->name()");
                m_emitDispState.pushFormat(suffix);
                break;
            }
            case 'l': {
                // Better than not compiling
                m_emitDispState.pushFormat("----");
                break;
            }
            default:
                nodep->v3error("Unknown $display-like format code: '%" << pos[0] << "'");
                break;
            }
        }
    }
    if (VL_UNCOVERABLE(elistp)) {
        // expectFormat also checks this, and should have found it first, so internal
        elistp->v3error("Internal: Extra arguments for $display-like format");  // LCOV_EXCL_LINE
    }
    displayEmit(nodep, isScan);
}

void EmitCFunc::emitCCallArgs(const AstNodeCCall* nodep, const string& selfPointer,
                              bool inProcess) {
    putns(nodep, "(");
    bool comma = false;
    if (nodep->funcp()->isLoose() && !nodep->funcp()->isStatic()) {
        UASSERT_OBJ(!selfPointer.empty(), nodep, "Call to loose method without self pointer");
        puts(selfPointer);
        comma = true;
    }
    if (nodep->funcp()->needProcess()) {
        if (comma) puts(", ");
        if (VN_IS(nodep->backp(), CAwait) || !nodep->funcp()->isCoroutine()) {
            puts("vlProcess");
        } else if (inProcess) {
            puts("std::make_shared<VlProcess>(vlProcess)");
        } else {
            puts("std::make_shared<VlProcess>()");
        }
        comma = true;
    }
    if (!nodep->argTypes().empty()) {
        if (comma) puts(", ");
        puts(nodep->argTypes());
        comma = true;
    }
    putCommaIterateNext(nodep->argsp(), comma);
    puts(")");
}

void EmitCFunc::emitDereference(AstNode* nodep, const string& pointer) {
    if (pointer[0] == '(' && pointer[1] == '&') {
        // remove "address of" followed by immediate dereference
        // Note: this relies on only the form '(&OBJECT)' being used by Verilator
        putns(nodep, pointer.substr(2, pointer.length() - 3));
        puts(".");
    } else {
        if (pointer == "vlSelf" && m_usevlSelfRef) {
            puts("vlSelfRef.");
        } else {
            putns(nodep, pointer);
            puts("->");
        }
    }
}

void EmitCFunc::emitCvtPackStr(AstNode* nodep) {
    if (const AstConst* const constp = VN_CAST(nodep, Const)) {
        emitConstantString(constp);
    } else if (VN_IS(nodep->dtypep(), StreamDType)) {
        putnbs(nodep, "VL_CVT_PACK_STR_ND(");
        iterateAndNextConstNull(nodep);
        puts(")");
    } else {
        putnbs(nodep, "VL_CVT_PACK_STR_N");
        emitIQW(nodep);
        puts("(");
        if (nodep->isWide()) {
            // Note argument width, not node width (which is always 32)
            puts(cvtToStr(nodep->widthWords()));
            puts(", ");
        }
        iterateAndNextConstNull(nodep);
        puts(")");
    }
}

void EmitCFunc::emitCvtWideArray(AstNode* nodep, AstNode* fromp) {
    putnbs(nodep, "VL_CVT_W_A(");
    iterateConst(nodep);
    puts(", ");
    iterateConst(fromp);
    putbs(".atDefault()");  // Not accessed; only to get the proper type of values
    puts(")");
}

void EmitCFunc::emitConstant(AstConst* nodep, AstVarRef* assigntop, const string& assignString) {
    // Put out constant set to the specified variable, or given variable in a string
    putns(nodep, "");
    if (nodep->num().isNull()) {
        putns(nodep, "VlNull{}");
    } else if (nodep->num().isFourState()) {
        nodep->v3warn(E_UNSUPPORTED, "Unsupported: 4-state numbers in this context");
    } else if (nodep->num().isString()) {
        emitConstantString(nodep);
    } else if (nodep->isWide()) {
        int upWidth = nodep->num().widthMin();
        int chunks = 0;
        if (upWidth > EMITC_NUM_CONSTW * VL_EDATASIZE) {
            // Output e.g. 8 words in groups of e.g. 8
            chunks = (upWidth - 1) / (EMITC_NUM_CONSTW * VL_EDATASIZE);
            upWidth %= (EMITC_NUM_CONSTW * VL_EDATASIZE);
            if (upWidth == 0) upWidth = (EMITC_NUM_CONSTW * VL_EDATASIZE);
        }
        {  // Upper e.g. 8 words
            if (chunks) {
                putnbs(nodep, "VL_CONSTHI_W_");
                puts(cvtToStr(VL_WORDS_I(upWidth)));
                puts("X(");
                puts(cvtToStr(nodep->widthMin()));
                puts(",");
                puts(cvtToStr(chunks * EMITC_NUM_CONSTW * VL_EDATASIZE));
            } else {
                putnbs(nodep, "VL_CONST_W_");
                puts(cvtToStr(VL_WORDS_I(upWidth)));
                puts("X(");
                puts(cvtToStr(nodep->widthMin()));
            }
            puts(",");
            if (!assigntop) {
                puts(assignString);
            } else {
                if (!assigntop->selfPointer().isEmpty()) {
                    emitDereference(assigntop, assigntop->selfPointerProtect(m_useSelfForThis));
                }
                puts(assigntop->varp()->nameProtect());
            }
            for (int word = VL_WORDS_I(upWidth) - 1; word >= 0; word--) {
                // Only 32 bits - llx + long long here just to appease CPP format warning
                ofp()->printf(",0x%08" PRIx64, static_cast<uint64_t>(nodep->num().edataWord(
                                                   word + chunks * EMITC_NUM_CONSTW)));
            }
            puts(")");
        }
        for (chunks--; chunks >= 0; chunks--) {
            puts(";\n");
            putbs("VL_CONSTLO_W_");
            puts(cvtToStr(EMITC_NUM_CONSTW));
            puts("X(");
            puts(cvtToStr(chunks * EMITC_NUM_CONSTW * VL_EDATASIZE));
            puts(",");
            if (!assigntop) {
                puts(assignString);
            } else {
                if (!assigntop->selfPointer().isEmpty()) {
                    emitDereference(assigntop, assigntop->selfPointerProtect(m_useSelfForThis));
                }
                puts(assigntop->varp()->nameProtect());
            }
            for (int word = EMITC_NUM_CONSTW - 1; word >= 0; word--) {
                // Only 32 bits - llx + long long here just to appease CPP format warning
                ofp()->printf(",0x%08" PRIx64, static_cast<uint64_t>(nodep->num().edataWord(
                                                   word + chunks * EMITC_NUM_CONSTW)));
            }
            puts(")");
        }
    } else if (nodep->isDouble()) {
        if (int(nodep->num().toDouble()) == nodep->num().toDouble()
            && nodep->num().toDouble() < 1000 && nodep->num().toDouble() > -1000) {
            ofp()->printf("%3.1f", nodep->num().toDouble());  // Force decimal point
        } else if (std::isinf(nodep->num().toDouble())) {
            if (std::signbit(nodep->num().toDouble())) puts("-");
            ofp()->puts("std::numeric_limits<double>::infinity()");
        } else if (std::isnan(nodep->num().toDouble())) {
            if (std::signbit(nodep->num().toDouble())) puts("-");
            ofp()->puts("std::numeric_limits<double>::quiet_NaN()");
        } else {
            // Not %g as will not always put in decimal point, so not obvious to compiler
            // is a real number
            ofp()->printf("%.17e", nodep->num().toDouble());
        }
    } else if (nodep->isQuad()) {
        const uint64_t num = nodep->toUQuad();
        if (num < 10) {
            ofp()->printf("%" PRIu64 "ULL", num);
        } else {
            ofp()->printf("0x%" PRIx64 "ULL", num);
        }
    } else {
        const uint32_t num = nodep->toUInt();
        // Only 32 bits - llx + long long here just to appease CPP format warning
        if (num < 10) {
            puts(cvtToStr(num));
        } else {
            ofp()->printf("0x%" PRIx64, static_cast<uint64_t>(num));
        }
        // If signed, we'll do our own functions
        // But must be here, or <= comparisons etc may end up signed
        puts("U");
    }
}

void EmitCFunc::emitConstantString(const AstConst* nodep) {
    putnbs(nodep, "std::string{");
    const string str = nodep->num().toString();
    if (!str.empty()) putsQuoted(str);
    puts("}");
}

void EmitCFunc::emitSetVarConstant(const string& assignString, AstConst* constp) {
    if (!constp->isWide()) {
        puts(assignString);
        puts(" = ");
    }
    emitConstant(constp, nullptr, assignString);
    puts(";\n");
}

void EmitCFunc::emitVarReset(AstVar* varp, bool constructing) {
    // 'constructing' indicates that the object was just constructed, so no need to clear it also
    AstNodeDType* const dtypep = varp->dtypep()->skipRefp();
    const string vlSelf = VSelfPointerText::replaceThis(m_useSelfForThis, "this->");
    const string varNameProtected = (VN_IS(m_modp, Class) || varp->isFuncLocal())
                                        ? varp->nameProtect()
                                        : vlSelf + varp->nameProtect();
    if (varp->isIO() && m_modp->isTop() && optSystemC()) {
        // System C top I/O doesn't need loading, as the lower level subinst code does it.}
    } else if (varp->isParam()) {
        UASSERT_OBJ(varp->valuep(), varp, "No init for a param?");
        // If a simple CONST value we initialize it using an enum
        // If an ARRAYINIT we initialize it using an initial block similar to a signal
        // puts("// parameter "+varp->nameProtect()+" = "+varp->valuep()->name()+"\n");
    } else if (const AstInitArray* const initarp = VN_CAST(varp->valuep(), InitArray)) {
        if (VN_IS(dtypep, AssocArrayDType)) {
            if (initarp->defaultp()) {
                emitSetVarConstant(varNameProtected + ".atDefault()",
                                   VN_AS(initarp->defaultp(), Const));
            }
            if (!constructing) puts(varNameProtected + ".clear();");
            const auto& mapr = initarp->map();
            for (const auto& itr : mapr) {
                AstNode* const valuep = itr.second->valuep();
                emitSetVarConstant(varNameProtected + ".at(" + cvtToStr(itr.first) + ")",
                                   VN_AS(valuep, Const));
            }
        } else if (VN_IS(dtypep, WildcardArrayDType)) {
            if (initarp->defaultp()) {
                emitSetVarConstant(varNameProtected + ".atDefault()",
                                   VN_AS(initarp->defaultp(), Const));
            }
            if (!constructing) puts(varNameProtected + ".clear();");
            const auto& mapr = initarp->map();
            for (const auto& itr : mapr) {
                AstNode* const valuep = itr.second->valuep();
                emitSetVarConstant(varNameProtected + ".at(" + cvtToStr(itr.first) + ")",
                                   VN_AS(valuep, Const));
            }
        } else if (AstUnpackArrayDType* const adtypep = VN_CAST(dtypep, UnpackArrayDType)) {
            if (initarp->defaultp()) {
                puts("for (int __Vi = 0; __Vi < " + cvtToStr(adtypep->elementsConst()));
                puts("; ++__Vi) {\n");
                emitSetVarConstant(varNameProtected + "[__Vi]", VN_AS(initarp->defaultp(), Const));
                puts("}\n");
            }
            const auto& mapr = initarp->map();
            for (const auto& itr : mapr) {
                AstNode* const valuep = itr.second->valuep();
                emitSetVarConstant(varNameProtected + "[" + cvtToStr(itr.first) + "]",
                                   VN_AS(valuep, Const));
            }
        } else {
            varp->v3fatalSrc("InitArray under non-arrayed var");
        }
    } else {
        putns(varp, emitVarResetRecurse(varp, constructing, varNameProtected, dtypep, 0, ""));
    }
}

string EmitCFunc::emitVarResetRecurse(const AstVar* varp, bool constructing,
                                      const string& varNameProtected, AstNodeDType* dtypep,
                                      int depth, const string& suffix) {
    dtypep = dtypep->skipRefp();
    AstBasicDType* const basicp = dtypep->basicp();
    // Returns string to do resetting, empty to do nothing (which caller should handle)
    if (AstAssocArrayDType* const adtypep = VN_CAST(dtypep, AssocArrayDType)) {
        // Access std::array as C array
        const string cvtarray = (adtypep->subDTypep()->isWide() ? ".data()" : "");
        const string pre = constructing ? "" : varNameProtected + suffix + ".clear();\n";
        return pre
               + emitVarResetRecurse(varp, constructing, varNameProtected, adtypep->subDTypep(),
                                     depth + 1, suffix + ".atDefault()" + cvtarray);
    } else if (AstWildcardArrayDType* const adtypep = VN_CAST(dtypep, WildcardArrayDType)) {
        // Access std::array as C array
        const string cvtarray = (adtypep->subDTypep()->isWide() ? ".data()" : "");
        const string pre = constructing ? "" : varNameProtected + suffix + ".clear();\n";
        return pre
               + emitVarResetRecurse(varp, constructing, varNameProtected, adtypep->subDTypep(),
                                     depth + 1, suffix + ".atDefault()" + cvtarray);
    } else if (VN_IS(dtypep, CDType)) {
        return "";  // Constructor does it
    } else if (VN_IS(dtypep, ClassRefDType)) {
        return "";  // Constructor does it
    } else if (VN_IS(dtypep, IfaceRefDType)) {
        return varNameProtected + suffix + " = nullptr;\n";
    } else if (const AstDynArrayDType* const adtypep = VN_CAST(dtypep, DynArrayDType)) {
        // Access std::array as C array
        const string cvtarray = (adtypep->subDTypep()->isWide() ? ".data()" : "");
        const string pre = constructing ? "" : varNameProtected + suffix + ".clear();\n";
        return pre
               + emitVarResetRecurse(varp, constructing, varNameProtected, adtypep->subDTypep(),
                                     depth + 1, suffix + ".atDefault()" + cvtarray);
    } else if (const AstQueueDType* const adtypep = VN_CAST(dtypep, QueueDType)) {
        // Access std::array as C array
        const string cvtarray = (adtypep->subDTypep()->isWide() ? ".data()" : "");
        const string pre = constructing ? "" : varNameProtected + suffix + ".clear();\n";
        return pre
               + emitVarResetRecurse(varp, constructing, varNameProtected, adtypep->subDTypep(),
                                     depth + 1, suffix + ".atDefault()" + cvtarray);
    } else if (VN_IS(dtypep, SampleQueueDType)) {
        return "";
    } else if (const AstUnpackArrayDType* const adtypep = VN_CAST(dtypep, UnpackArrayDType)) {
        UASSERT_OBJ(adtypep->hi() >= adtypep->lo(), varp,
                    "Should have swapped msb & lsb earlier.");
        const string ivar = "__Vi"s + cvtToStr(depth);
        const string pre = ("for (int " + ivar + " = " + cvtToStr(0) + "; " + ivar + " < "
                            + cvtToStr(adtypep->elementsConst()) + "; ++" + ivar + ") {\n");
        const string below
            = emitVarResetRecurse(varp, constructing, varNameProtected, adtypep->subDTypep(),
                                  depth + 1, suffix + "[" + ivar + "]");
        const string post = "}\n";
        return below.empty() ? "" : pre + below + post;
    } else if (VN_IS(dtypep, NodeUOrStructDType) && !VN_AS(dtypep, NodeUOrStructDType)->packed()) {
        const auto* const sdtypep = VN_AS(dtypep, NodeUOrStructDType);
        string literal;
        for (const AstMemberDType* itemp = sdtypep->membersp(); itemp;
             itemp = VN_AS(itemp->nextp(), MemberDType)) {
            const std::string line = emitVarResetRecurse(
                varp, constructing, varNameProtected + suffix + "." + itemp->nameProtect(),
                itemp->dtypep(), depth + 1, "");
            if (!line.empty()) literal += line;
        }
        return literal;
    } else if (basicp && basicp->keyword() == VBasicDTypeKwd::STRING) {
        if (constructing) return "";  // String's constructor deals with it
        return varNameProtected + suffix + ".clear();\n";
    } else if (basicp && basicp->isForkSync()) {
        return "";
    } else if (basicp && basicp->isProcessRef()) {
        return "";
    } else if (basicp && basicp->isDelayScheduler()) {
        return "";
    } else if (basicp && basicp->isTriggerScheduler()) {
        return "";
    } else if (basicp && basicp->isDynamicTriggerScheduler()) {
        return "";
    } else if (basicp && basicp->isRandomGenerator()) {
        return "";
    } else if (basicp) {
        const bool zeroit
            = (varp->attrFileDescr()  // Zero so we don't do file IO if never $fopen
               || varp->isFuncLocal()  // Randomization too slow
               || (basicp && basicp->isZeroInit())
               || (v3Global.opt.underlineZero() && !varp->name().empty() && varp->name()[0] == '_')
               || (v3Global.opt.xInitial() == "fast" || v3Global.opt.xInitial() == "0"));
        const bool slow = !varp->isFuncLocal() && !varp->isClassMember();
        splitSizeInc(1);
        if (dtypep->isWide()) {  // Handle unpacked; not basicp->isWide
            string out;
            if (varp->valuep()) {
                const AstConst* const constp = VN_AS(varp->valuep(), Const);
                UASSERT_OBJ(constp, varp, "non-const initializer for variable");
                for (int w = 0; w < varp->widthWords(); ++w) {
                    out += varNameProtected + suffix + "[" + cvtToStr(w) + "] = ";
                    out += cvtToStr(constp->num().edataWord(w)) + "U;\n";
                }
            } else {
                out += zeroit ? (slow ? "VL_ZERO_RESET_W(" : "VL_ZERO_W(") : "VL_RAND_RESET_W(";
                out += cvtToStr(dtypep->widthMin());
                out += ", " + varNameProtected + suffix + ");\n";
            }
            return out;
        } else {
            string out = varNameProtected + suffix;
            // If --x-initial-edge is set, we want to force an initial
            // edge on uninitialized clocks (from 'X' to whatever the
            // first value is). Since the class is instantiated before
            // initial blocks are evaluated, this should not clash
            // with any initial block settings.
            if (zeroit || (v3Global.opt.xInitialEdge() && varp->isUsedClock())) {
                out += " = 0;\n";
            } else {
                out += " = VL_RAND_RESET_";
                out += dtypep->charIQWN();
                out += "(" + cvtToStr(dtypep->widthMin()) + ");\n";
            }
            return out;
        }
    } else {  // LCOV_EXCL_BR_LINE
        v3fatalSrc("Unknown node type in reset generator: " << varp->prettyTypeName());
    }
    return "";
}
