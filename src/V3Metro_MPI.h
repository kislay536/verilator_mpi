#include "V3Ast.h"
#include "V3AstNodeOther.h"
#include "V3Blake2b.h"
#include <iostream>
#include <unordered_map>
#include <vector>

class HierCellsGraphVisitor final : public VNVisitorConst
{
    std::string stripTrailingDot(const std::string &str)
    {
        if (!str.empty() && str.back() == '.')
        {
            return str.substr(0, str.size() - 1);
        }
        return str;
    }

    struct CellInfo
    {
        std::string name;
        std::string submodname;
        std::string hier;
    };

    struct ModNode
    {
        std::string moduleName;
        std::string instanceName;
        std::string hierInstance; // e.g. $root.top.cpu.alu
        std::string hierModule;   // e.g. $root.top.cpu.alu_module
        std::string hash;         // blake2b hash
        int weight;

        ModNode() = default; // <-- This is the fix

        ModNode(const std::string &mod, const std::string &inst, const std::string &hInst, const std::string &hMod, const std::string &blake, const int w)
            : moduleName(mod), instanceName(inst), hierInstance(hInst), hierModule(hMod), hash(blake), weight(w) {}
    };
    std::string m_rootHier;
    std::unordered_map<std::string, ModNode> nodeMetadata;
    std::vector<std::pair<std::string, std::string>> edges; // parent -> child edges
    std::vector<CellInfo> nodes;                            // all cells seen
    std::unordered_map<std::string, AstNodeModule *> instanceToModuleMap;
    std::unordered_map<std::string, AstNodeModule *> moduleNameToModulePtr;
    std::string m_hier;              // current hierarchy prefix
    std::string m_hierWRTModuleName; // current hierarchy prefix
    std::unordered_map<std::string, std::vector<ModNode>> adjacency;

    void dfs(const std::string &nodeHier, std::unordered_set<std::string> &visited)
    {
        if (visited.count(nodeHier))
            return;
        visited.insert(nodeHier);

        std::cout << "Visiting: " << nodeHier << "\n";

        auto infoIt = nodeMetadata.find(nodeHier);
        if (infoIt != nodeMetadata.end())
        {
            const ModNode &node = infoIt->second;
            std::cout << "    Instance: " << node.instanceName << "\n";
            std::cout << "    Module  : " << node.moduleName << "\n";
            std::cout << "    Hier(inst): " << node.hierInstance << "\n";
            std::cout << "    Hier(mod) : " << node.hierModule << "\n";
            std::cout << "    Hash(mod) : " << node.hash << "\n\n";
        }
        else
        {
            std::cout << "    [No metadata available — possibly root]\n\n";
        }

        int totalChildWeight = 0;
        bool hasChild = false;

        auto it = adjacency.find(nodeHier);
        if (it != adjacency.end())
        {
            for (const ModNode &child : it->second)
            {
                hasChild = true;
                dfs(child.hierInstance, visited);
                totalChildWeight += nodeMetadata[child.hierInstance].weight;
            }
        }

        // Assign weight: leaf = 1, else sum of child weights
        if (nodeMetadata.count(nodeHier))
        {
            if (hasChild)
            {
                nodeMetadata[nodeHier].weight = totalChildWeight;
            }
            else
            {
                nodeMetadata[nodeHier].weight = 1;
            }
        }
    }

    void visit(AstNodeModule *nodep) override
    {
        if (!nodep->dead())
        {
            // std::string rawName = nodep->origName();
            // m_hier = stripTrailingDot(rawName) + ".";
            // m_hierWRTModuleName = stripTrailingDot(nodep->name()) + ".";
            m_hier = "$root";              // Start DFS from root (instance-based)
            m_hierWRTModuleName = "$root"; // Start module-based hierarchy also from root
            iterateChildrenConst(nodep);
        }
    }

    void visit(AstCell *nodep) override
    {
        if (nodep->modp() && nodep->modp()->dead())
            return;

        if (nodep->modp())
        {
            instanceToModuleMap[nodep->name()] = nodep->modp();
            moduleNameToModulePtr[nodep->modName()] = nodep->modp(); // <-- add this
        }

        std::string cellHier = stripTrailingDot(m_hier) + "." + nodep->name();

        nodes.push_back({.name = nodep->name(),
                         .submodname = nodep->modName(),
                         .hier = cellHier});

        instanceToModuleMap[nodep->name()] = nodep->modp();

        std::string parentHier = stripTrailingDot(m_hier);
        std::string instanceName = nodep->name();
        std::string modName = nodep->modName();
        std::string childHierWRTInstanceName = parentHier + "." + instanceName;
        std::string childHierWRTModuleName = stripTrailingDot(m_hierWRTModuleName) + "." + modName;

        // std::cout << "childHierWRTModuleName->" << childHierWRTModuleName << std::endl;

        ModNode childNode(modName, instanceName, childHierWRTInstanceName, childHierWRTModuleName, blake2b_128_hex(childHierWRTModuleName), 0); // has to set export LIBS="-lsodium"
        nodeMetadata[childHierWRTInstanceName] = childNode;
        edges.emplace_back(parentHier, childHierWRTInstanceName);
        adjacency[parentHier].push_back(childNode);

        // Save current hierarchy paths
        const std::string oldHier = m_hier;
        const std::string oldModHier = m_hierWRTModuleName;

        // Update for recursive visit
        m_hier = childHierWRTInstanceName;
        m_hierWRTModuleName = childHierWRTModuleName;

        iterateChildrenConst(nodep->modp());

        // Restore parent hierarchy paths
        m_hier = oldHier;
        m_hierWRTModuleName = oldModHier;
    }

    void visit(AstNode *nodep) override
    {
        iterateChildrenConst(nodep);
    }

public:
    HierCellsGraphVisitor(AstNetlist *rootp)
    {
        // iterateConst(rootp); //iterating with this will start from $root
        AstNodeModule *top = rootp->topModulep();
        m_hier = stripTrailingDot(top->name()) + "."; // toggling this to name/modName will give hier w.r.t. real module names
        m_rootHier = stripTrailingDot(top->origName());
        nodeMetadata["$root"] = ModNode("$root", "$root", "$root", "$root", blake2b_128_hex("$root"), 0);
        iterateConst(top);
    }

    void runBFSCheckDuplicateHashes()
    {
        std::queue<std::string> q;
        q.push("$root");

        std::unordered_set<std::string> visited;
        visited.insert("$root");

        int level = 0;

        while (!q.empty())
        {
            size_t levelSize = q.size();
            std::unordered_map<std::string, std::vector<ModNode>> hashToNodes;

            // Process all nodes at this BFS level
            for (size_t i = 0; i < levelSize; ++i)
            {
                std::string current = q.front();
                q.pop();

                const auto &children = adjacency[current];
                for (const auto &child : children)
                {
                    if (visited.count(child.hierInstance))
                        continue;
                    visited.insert(child.hierInstance);

                    // Group by hash
                    hashToNodes[child.hash].push_back(child);

                    // Add child to queue for next level
                    q.push(child.hierInstance);
                }
            }

            // Check for duplicate hashes at this level
            bool foundAny = false;
            std::string bestHash;
            int maxWeight = -1;

            for (const auto &[hash, nodes] : hashToNodes)
            {
                if (nodes.size() > 1)
                {
                    int currentWeightSum = 0;
                    for (const auto &node : nodes)
                    {
                        if (nodeMetadata.count(node.hierInstance))
                        {
                            currentWeightSum += nodeMetadata[node.hierInstance].weight;
                        }
                    }
                    if (currentWeightSum > maxWeight)
                    {
                        maxWeight = currentWeightSum;
                        bestHash = hash;
                        foundAny = true;
                    }
                }
            }

            if (foundAny)
            {
                std::cout << "Duplicate hash(es) found at level " << level << ":\n";
                std::cout << "  Hash: " << bestHash << " (Max weight sum: " << maxWeight << ")\n";
                for (const auto &node : hashToNodes[bestHash])
                {
                    std::cout << "    Module: " << node.moduleName
                              << ", Instance: " << node.instanceName
                              << ", Hier: " << node.hierInstance
                              << ", Weight: " << nodeMetadata[node.hierInstance].weight << "\n";
                }
                std::string moduleName = hashToNodes[bestHash][0].moduleName;
                if (moduleNameToModulePtr.count(moduleName))
                {
                    AstNodeModule *modp = moduleNameToModulePtr[moduleName];
                    modp->hierBlock(true);
                    std::cout << "Marked module '" << moduleName << "' as hierBlock(true).\n";
                }
                return;
            }

            ++level;
        }

        std::cout << "No duplicate hashes found at any level.\n";
    }

    void runDFS()
    {
        std::unordered_set<std::string> visited;
        dfs("$root", visited);
    }

    void dumpDot(std::ostream &os)
    {
        os << "digraph G {\n";
        // for (const auto& node : nodes) {
        //     os << "  \"" << node.hier << "\" [label=\"" << node.name
        //        << "\\n" << node.submodname << "\"];\n";
        // }
        for (const auto &edge : edges)
        {
            os << "  \"" << edge.first << "\" -> \"" << edge.second << "\";\n";
        }
        os << "}\n";
        std::cout << "Printing the instance to module map" << endl;
        for (const auto &[instanceName, modulePtr] : instanceToModuleMap)
        {
            std::cout << "Instance: " << instanceName << ", Module: " << modulePtr->name() << "\n";
        }
    }
    void dumpAdjacency(std::ostream &os)
    {
        for (const auto &[parent, children] : adjacency)
        {
            os << "Parent: " << parent << "\n";
            for (const auto &child : children)
            {
                os << "  └─ Instance: " << child.instanceName
                   << ", Module: " << child.moduleName
                   << ", Hier: " << child.hierInstance << "\n";
            }
        }
    }
};
