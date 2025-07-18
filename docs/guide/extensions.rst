.. Copyright 2003-2025 by Wilson Snyder.
.. SPDX-License-Identifier: LGPL-3.0-only OR Artistic-2.0

=====================
 Language Extensions
=====================

The following additional constructs are the extensions Verilator supports
on top of standard Verilog code.  Using these features outside of comments
or "`ifdef`"'s may break other tools.

.. option:: """ [string] """

   A triple-quoted block specifies a string that may include newlines and
   single quotes.  This extension was standardized in IEEE 1800-2023.

.. option:: `__FILE__

   The :option:`\`__FILE__` define expands to the current filename as a
   string, like C++'s __FILE__.  This Verilator feature, added in 2006, was
   incorporated into IEEE 1800-2009.

.. option:: `__LINE__

   The :option:`\`__LINE__` define expands to the current line number like
   C++'s __LINE__.  This Verilator feature added in 2006 was incorporated
   into IEEE 1800-2009.

.. option:: `coverage_block_off

   Specifies the entire begin/end block should be ignored for coverage
   analysis.  Must be inside a code block, e.g., within a begin/end pair.
   Same as :option:`coverage_block_off` in :ref:`Configuration Files`.

.. option:: `error [string]

   This will report an error when the preprocessor emits it, similar to
   C++'s #error.

.. option:: `line

   As a special case `\`line \`__LINE__ "filename"` allows setting the
   filename, without changing the line number. This is used for some
   internal tests, so that debugging can leave the line numbers correctly
   referring to the test file's line numbers.

.. option:: `systemc_class_name

   Inside one of the :option:`\`systemc_... <\`systemc_header>` text
   blocks, replaced with the C++ class name generated for the given
   containing SystemVerilog class or module. Currently this is replaced
   blindly, ignoring quoting or other escapes; this behavior may change in
   the future.  This attribute is indented only to be used internally in
   `verilated_std.sv`.

.. option:: `systemc_ctor

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into the C++ class constructor.  Must be placed as a module or
   class item, e.g., directly inside a module/endmodule or class/endclass
   pair. Despite the name of this macro, this also works in pure C++ code.

.. option:: `systemc_dtor

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into the C++ class destructor.  Must be placed as a module or
   class item, e.g., directly inside a module/endmodule or class/endclass
   pair. Despite the name of this macro, this also works in pure C++ code.

.. option:: `systemc_header

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into the output .h file's header.  Must be placed as a module
   or class item, e.g., directly inside a module/endmodule or
   class/endclass pair. Despite the name of this macro, this also works in
   pure C++ code.

.. option:: `systemc_header_post

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into the output .h file's header after the class definition.
   Must be placed as a module or class item, e.g., directly inside a
   module/endmodule or class/endclass pair. Despite the name of this macro,
   this also works in pure C++ code.

.. option:: `systemc_imp_header

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into the header of all files for this C++ class implementation.
   Must be placed as a module or class item, e.g., directly inside a
   module/endmodule or class/endclass pair. Despite the name of this macro,
   this also works in pure C++ code.

.. option:: `systemc_implementation

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into a single file of the C++ class implementation.  Must be
   placed as a module or class item, e.g., directly inside a
   module/endmodule or class/endclass pair. Despite the name of this macro,
   this also works in pure C++ code.

   If you will be reading or writing any Verilog variables in the C++
   functions, the Verilog signals must be declared with a
   :option:`/*verilator&32;public*/` metacomment.  See also the public task
   feature; writing an accessor may result in cleaner code.

.. option:: `systemc_interface

   Take the remaining text up to the next :option:`\`verilog` or
   :option:`\`systemc_... <\`systemc_header>` mode switch and place it
   verbatim into the C++ class interface.  Must be placed as a module or
   class item, e.g., directly inside a module/endmodule or class/endclass
   pair. Despite the name of this macro, this also works in pure C++ code.

.. option:: `SYSTEMVERILOG

   The SYSTEMVERILOG, SV_COV_START, and related standard predefined macros
   are defined by default when :vlopt:`--language <--language>` is
   "1800-\*".

.. option:: `VERILATOR

.. option:: `verilator

.. option:: `verilator3

   The VERILATOR, verilator and verilator3 predefined macros are defined by
   default so you may "\`ifdef" around tool specific constructs.

.. option:: `verilator_config

   Take the remaining text up to the next :option:`\`verilog` mode switch and
   treat it as Verilator configuration commands.  See :ref:`Configuration Files`.

.. option:: `VERILATOR_TIMING

   The VERILATOR_TIMING define is set when :vlopt:`--timing` is used to
   allow an "\`ifdef" of code dependent on this feature.  Note that this define
   is not affected by the :option:`timing_off` configuration file option
   nor timing metacomments.

.. option:: `verilog

   Switch back to processing Verilog code after a
   :option:`\`systemc_... <\`systemc_header>` mode switch.  The Verilog
   code returns to the last language mode specified with
   "\`begin_keywords", or SystemVerilog if none was specified.


   .. t_dist_docs_style restart_sort

.. option:: $c([string], ...);

   The string will be embedded directly in the output C++ code at the point
   where the surrounding Verilog code is compiled.  It may either be a
   standalone statement (with a trailing ; in the string), or a function
   that returns up to a 32-bit number (without a trailing ;). This can be
   used to call C++ functions from your Verilog code.

   String arguments will be put directly into the output C++ code, except
   the word 'this' (i.e.: the object pointer) might be replaced with a
   different pointer as Verilator might implement logic with non-member
   functions. For this reason, any references to class members must be made
   via an explicit 'this->' pointer dereference.

   Expression arguments will have the code to evaluate the expression
   inserted.  Thus to call a C++ function, :code:`$c("func(",a,")")` will
   result in :code:`func(a)` in the output C++ code.  For input arguments,
   rather than hard-coding variable names in the string
   :code:`$c("func(a)")`, instead pass the variable as an expression
   ::code:`$c("func(",a,")")`.  This will allow the call to work inside
   Verilog functions where the variable is flattened out and enable other
   optimizations.

   Verilator does not use any text inside the quotes for
   ordering/scheduling.  If you need the $c to be called at a specific
   time, e.g., when a variable changes, then the $c must be under an
   appropriate sensitivity statement, e.g.,
   :code:`always @(posedge clk) $c("func()")` to call it on every edge, or,
   e.g., :code:`always @* c("func(",a,")")` to call it when :code:`a`
   changes (the latter working because :code:`a` is outside the quotes).

   If you will be reading or writing any Verilog variables inside the C++
   functions, the Verilog signals must be declared with
   :option:`/*verilator&32;public*/` metacomments.

   You may also append a number to $c, which specifies the bit width of
   the output, e.g., :code:`signal_32_bits = $c32("...");`.  This allows for
   compatibility with other simulators, which require a differently named
   PLI function name for each different output width.

.. option:: $display, $write, $fdisplay, $fwrite, $sformat, $swrite

   Format arguments may use C fprintf sizes after the % escape.  Per the
   Verilog standard, %x prints a number with the natural width, and %0x
   prints a number with minimum width.  Verilator extends this so %5x
   prints 5 digits per the C standard. This extension was standardized into
   1800-2009.

.. option:: $stacktrace

   Called as a task, print a stack trace.  Called as a function, return a
   string with a stack trace.  This relies on the C++ system trace, which
   may give less meaningful results if the model is not compiled with debug
   symbols.  Also, the data represents the C++ stack; the SystemVerilog
   functions/tasks involved may be renamed and/or inlined before becoming
   the C++ functions that may be visible in the stack trace.  This
   extension was standardized in IEEE 1800-2023.

.. option:: $timeprecision

   Returns the timeprecision of the model as an integer.  This extension is
   experimental and may be removed without deprecation.

.. option:: $timeunit

   Returns the timeunit of the current module as an integer.  This
   extension is experimental and may be removed without deprecation.

.. option:: /*verilator&32;clock_enable*/

   Deprecated and has no effect (ignored).

   In versions before 5.000:

   Used after a signal declaration to indicate the signal is used to gate a
   clock, and the user is responsible for ensuring there are no races
   related to it. (Typically by adding a latch, and running static timing
   analysis.) For example:

   .. code-block:: sv

         reg enable_r /*verilator clock_enable*/;
         wire gated_clk = clk & enable_r;
         always_ff @(posedge clk)
            enable_r <= enable_early;

   The clock_enable attribute will cause the clock gate to be ignored in
   the scheduling algorithm, sometimes required for correct clock behavior,
   and always improving performance.

   Same as :option:`clock_enable` configuration file option.


   .. t_dist_docs_style ignore /*verilator&32;no_clocker*/

.. option:: /*verilator&32;clocker*/

.. option:: /*verilator&32;no_clocker*/

   Specifies whether the signal is used as clock or not. See :vlopt:`--clk`.

   Same as :option:`clocker` and :option:`no_clocker` in configuration
   files.

.. option:: /*verilator&32;coverage_block_off*/

   Specifies the entire begin/end block should be ignored for coverage
   analysis purposes.

   Same as :option:`coverage_block_off` configuration file option.

.. option:: /*verilator&32;coverage_off*/

   Specifies that that following lines of code should have coverage disabled.
   Often used to ignore an entire module for coverage analysis purposes.

.. option:: /*verilator&32;coverage_on*/

   Specifies that that following lines of code should have coverage re-enabled
   (if appropriate :vlopt:`--coverage` flags are passed) after being
   disabled earlier with :option:`/*verilator&32;coverage_off*/`.

.. option:: /*verilator&32;forceable*/

   Specifies that the signal (net or variable) should be made forceable from
   C++ code by generating public `<signame>__VforceEn` and
   `<signame>__VforceVal` signals. The force control signals are created as
   :option:`public_flat` signals.

   To force a marked signal from C++, set the corresponding `__VforceVal`
   variable to the desired value, and the `__VforceEn` signal to the bit-mask
   indicating which bits of the signal to force. To force all bits of the
   target signal, set `__VforceEn` to all ones. To release the signal (or part
   thereof), set appropriate bits of the `__VforceEn` signal to zero.

   Same as :option:`forceable` in configuration  files.

.. _verilator_hier_block:

.. option:: /*verilator&32;hier_block*/

   Specifies that the module is a unit of hierarchical Verilation.  This
   metacomment must be between :code:`module module_name(...);` and
   :code:`endmodule`.  The module will not be inlined nor uniquified for
   each instance in hierarchical Verilation.  Note that the metacomment is
   ignored unless the :vlopt:`--hierarchical` option is specified.

   See :ref:`Hierarchical Verilation`.

.. option:: /*verilator&32;inline_module*/

   Specifies the module the comment appears in may be inlined into any
   modules that use this module.  This is useful to speed up simulation
   runtime.  Note if using :vlopt:`--public` that signals under inlined
   submodules will be named :code:`{submodule}__DOT__{subsignal}` as C++
   does not allow "." in signal names.

   Same as :option:`inline` configuration file option.

.. option:: /*verilator&32;isolate_assignments*/

   Used after a signal declaration to indicate the assignments to this
   signal in any blocks should be isolated into new blocks.  When large
   combinatorial block results in a :option:`UNOPTFLAT` warning, attaching
   this to the signal that was causing a false loop may work around the
   warning.

   IE, with the following:

   .. code-block:: sv

         reg splitme /* verilator isolate_assignments*/;
         // Note the placement of the semicolon above
         always_comb begin
           if (....) begin
              splitme = ....;
              other assignments
           end
         end

   Verilator will internally split the block that assigns to "splitme" into
   two blocks:

   It would then internally break it into (sort of):

   .. code-block:: sv

         // All assignments excluding those to splitme
         always_comb begin
           if (....) begin
              other assignments
           end
         end
         // All assignments to splitme
         always_comb begin
           if (....) begin
              splitme = ....;
           end
         end

   Same as :option:`isolate_assignments` configuration file option.

.. option:: /*verilator&32;lint_off <msg>*/

   Disable the specified warning message for any warnings following the
   comment.

.. option:: /*verilator&32;lint_on <msg>*/

   Re-enable the specified warning message for any warnings following the
   comment.

.. option:: /*verilator&32;lint_restore*/

   After a :code:`/*verilator&32;lint_save*/`, pop the stack containing lint
   message state.  Often this is useful at the bottom of include files.

.. option:: /*verilator&32;lint_save*/

   Push the current state of what lint messages are turned on or off
   to a stack.  Later meta-comments may then lint_on or lint_off specific
   messages, then return to the earlier message state by using
   :code:`/*verilator&32;lint_restore*/`.  For example:

   .. code-block:: sv

         // verilator lint_save
         // verilator lint_off WIDTH
         ...  // code needing WIDTH turned off
         // verilator lint_restore

   If WIDTH was on before the lint_off, it would now be restored to on, and
   if it was off before the lint_off it would remain off.

.. option:: /*verilator&32;no_inline_module*/

   Specifies the module the comment appears in should not be inlined into
   any modules that use this module.

   Same as :option:`no_inline` configuration file option.

.. option:: /*verilator&32;no_inline_task*/

   Used in a function or task variable definition section to specify the
   function or task should not be inlined into where it is used.  This may
   reduce the size of the final executable when a task is used a very large
   number of times.  For this flag to work, the task and tasks below it
   must be pure; they cannot reference any variables outside the task
   itself.

   Same as :option:`no_inline` configuration file option.

.. option:: /*verilator&32;public*/ (on parameter)

   Used after a parameter declaration to indicate the emitted C code should
   have the parameter values visible. Due to C++ language restrictions,
   this may only be used on 64-bit or narrower integral enumerations.

   .. code-block:: sv

         parameter [2:0] PARAM /*verilator public*/ = 2'b0;

.. option:: /*verilator&32;public*/ (on task/function)

   Used inside the declaration section of a function or task declaration to
   indicate the function or task should be made into a C++ function, public
   to outside callers.  Public tasks will be declared as a void C++
   function, public functions will get the appropriate non-void (bool,
   uint32_t, etc.) return type.  Any input arguments will become C++
   arguments to the function.  Any output arguments will become C++
   reference arguments.  Any local registers/integers will become function
   automatic variables on the stack.

   Wide variables over 64 bits cannot be function returns, to avoid
   exposing complexities.  However, wide variables can be input/outputs;
   they will be passed as references to an array of 32-bit numbers.

   Generally, only the values of stored state (flops) should be written, as
   the model will NOT notice changes made to variables in these functions.
   (Same as when a signal is declared public.)

   You may want to use DPI exports instead, as it's compatible with other
   simulators.

   Same as :option:`public` configuration file option.

.. option:: /*verilator&32;public*/ (on typedef enum)

   Used after an enum typedef declaration to indicate the emitted C code
   should have the enum values visible. Due to C++ language restrictions,
   this may only be used on 64-bit or narrower integral enumerations.

   .. code-block:: sv

         typedef enum logic [2:0] { ZERO = 3'b0 } pub_t /*verilator public*/;

.. option:: /*verilator&32;public*/ (on variable)

   Used after an input, output, register, or wire declaration to indicate
   the signal should be declared so that C code may read or write the value
   of the signal.  This will also declare this module public; otherwise, use
   :code:`/*verilator&32;public_flat*/`.

   Instead of using public variables, consider making a DPI or public
   function that accesses the variable.  This is nicer as it provides an
   obvious entry point compatible across simulators.

   Same as :option:`public` configuration file option.

.. option:: /*verilator&32;public_[|flat|flat_rd|flat_rw]_on [@(<edge_list>)]*/ (as scope)

   Used to wrap multiple signals and parameters with the respective public attribute.
   See attribute above for their respective behavior. Cannot be nested. e.g:

      .. code-block:: sv

         /*verilator public_flat_rw_on*/
         logic clk;
         logic rst;
         parameter width = 8;
         /* verilator public_off*/
         logic data;

   Is equivalent to:

      .. code-block:: sv

         logic clk /*verilator public_flat_rw*/;
         logic rst /*verilator public_flat_rw*/;
         parameter width /*verilator public_flat_rw*/ = 8;
         logic data;

.. option:: /*verilator&32;public_flat*/ (on variable)

   Used after an input, output, register, or wire declaration to indicate
   the signal should be declared so that C code may read or write the value
   of the signal.  This will not declare this module public, which means
   the name of the signal or path to it may change based upon the module
   inlining which takes place.

   Same as :option:`public_flat` configuration file option.

.. option:: /*verilator&32;public_flat_rd*/ (on variable)

   Used after an input, output, register, or wire declaration to indicate
   the signal should be declared public_flat (see above), but read-only.

   Same as :option:`public_flat_rd` configuration file option.

.. option:: /*verilator&32;public_flat_rw @(<edge_list>)*/ (on variable)

   Used after an input, output, register, or wire declaration to indicate
   the signal should be declared public_flat_rd (see above), and writable,
   where writes should be considered to have the timing specified by the
   given sensitivity edge list. Use of this is implied when using the
   :vlopt:`--public-flat-rw` option.

   Same as :option:`public_flat_rw` configuration file option.

.. option:: /*verilator&32;public_module*/

   Used after a module statement to indicate the module should not be
   inlined (unless specifically requested) so that C code may access the
   module.  Verilator automatically sets this attribute when the module
   contains public signals or \`systemc_ directives.  Use of this is
   implied when using the :vlopt:`--public` option.

   Same as :option:`public` configuration file option.

.. option:: /*verilator&32;public_off*/

   Terminates the previous `/*verilator public*_on*/` directive; see above.

.. option:: /*verilator&32;sc_bv*/

   Used after a port declaration.  It sets the port to be of
   :code:`sc_bv<{width}>` type, instead of bool, uint32_t, or uint64_t.
   This may be useful if the port width is parameterized and the
   instantiating C++ code always wants to have a sc_bv accept any width.
   In general, you should avoid using this attribute when unnecessary, as
   the performance decreases significantly with increasing usage of sc_bv.

   Same as :option:`sc_bv` configuration file option.

.. option:: /*verilator&32;sc_clock*/

   Deprecated and ignored.  Previously used after an input declaration to
   indicate the signal should be declared in SystemC as a sc_clock instead
   of a bool.  This was needed in SystemC 1.1 and 1.2 only; versions 2.0
   and later do not require clock pins to be sc_clocks, and this is no
   longer needed and is ignored.

.. option:: /*verilator&32;sformat*/

   Attached to the final argument of type "input string" of a function or
   task to indicate that the function or task should pass all remaining
   arguments through $sformatf.  This allows creation of DPI functions with
   $display-like behavior.  See the :file:`test_regress/t/t_dpi_display.v`
   file for an example.

   Same as :option:`sformat` configuration file option.

.. option:: /*verilator&32;split_var*/

   Attached to a variable or a net declaration to break the variable into
   multiple pieces typically to resolve ``UNOPTFLAT`` performance issues.
   Typically the variables to attach this to are recommended by Verilator
   itself; see :option:`UNOPTFLAT`.

   For example, Verilator will internally convert a variable with the
   metacomment such as:

   .. code-block:: sv

         logic [7:0] x [0:1]  /*verilator split_var*/;

   To:

   .. code-block:: sv

         logic [7:0] x__BRA__0__KET__ /*verilator split_var*/;
         logic [7:0] x__BRA__1__KET__ /*verilator split_var*/;

   Note that the generated packed variables retain the split_var
   metacomment because they may be split into smaller pieces according to
   the access patterns.

   This only supports unpacked arrays, packed arrays, and packed structs of
   integer types (reg, logic, bit, byte, int...); otherwise, if a split was
   requested but cannot occur, a SPLITVAR warning is issued.  Splitting
   large arrays may slow down the Verilation speed, so use this only on
   variables that require it.

   Packed variables that are only referenced locally (without hierarchical
   references) via non-overlapping, constant-indexed bit or part select
   expressions are split automatically. This covers the somewhat common
   usage pattern:

   .. code-block:: sv

         logic [1:0][31:0] tmp;

         assign tmp[0] = foo    + a;
         assign tmp[1] = tmp[1] + b;
         assign bar    = tmp[1] + c;


   Same as :option:`split_var` configuration file option.

.. option:: /*verilator&32;tag <text...>*/

   Attached after a variable or structure member to indicate opaque (to
   Verilator) text that should be passed through to the XML output as a tag,
   for use by downstream applications.

.. option:: /*verilator&32;timing_off*/

   Ignore all timing constructs after this metacomment. All timing controls
   behave as if they were not there (the same way as with
   :option:`--no-timing`), and :code:`fork`/:code:`join*` blocks are
   converted into :code:`begin`/:code:`end` blocks.

   Same as :option:`timing_off` configuration file option.

.. option:: /*verilator&32;timing_on*/

   Re-enable all timing constructs after this metacomment (only applicable
   after :option:`timing_off`).

   Same as :option:`timing_on` configuration file option.

.. option:: /*verilator&32;trace_init_task*/

   Removed.

   In versions before 5.024:

   Attached to a DPI import to indicate that function should be called when
   initializing tracing. This attribute is indented only to be used
   internally in code that Verilator generates when :vlopt:`--lib-create`
   or :vlopt:`--hierarchical` is used along with :vlopt:`--trace-vcd`.

.. option:: /*verilator&32;tracing_off*/

   Disable waveform tracing for all future signals declared in this module,
   or instances below this module.  Often this is placed just after a
   primitive's module statement, so that the entire module and instances
   below it are not traced.

.. option:: /*verilator&32;tracing_on*/

   Re-enable waveform tracing for all future signals or instances that are
   declared.

.. option:: /*verilator&32;unroll_disable*/

   Used in a statement position to indicate the immediately following loop
   at the same statement level should not be unrolled by Verilator,
   ignoring :vlopt:`--unroll-count`.  This is similar to clang's ``#pragma
   clang loop unroll(disable)``.

   This option does not currently disable the C++ compiler's unrolling (or
   not) of any loops that make it through to the Verilated C++ code.

.. option:: /*verilator&32;unroll_full*/

   Rarely needed. Used in a statement position to indicate the immediately
   following loop at the same statement level should always be fully
   unrolled by Verilator, ignoring :vlopt:`--unroll-count`.  This is
   similar to clang's ``#pragma clang loop unroll(full)``.
