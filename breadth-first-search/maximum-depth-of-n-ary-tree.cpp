/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
    //  using dfs
        if (!root)
            return 0;
        int depth = 0;
        for (auto& child : root->children) {
            depth = max(depth, maxDepth(child));
        }
        return depth+1;
    // using bfs
        // if (!root)
        //     return 0;
        // queue<Node*> q;
        // q.push(root);
        // int depth = 0;
        // while (!q.empty()) {
        //     int size = q.size();
        //     for (int i = 0; i < size; i++) {
        //         Node* node = q.front();
        //         q.pop();
        //         for (auto& child : node->children) {
        //             q.push(child);
        //         }
        //     }
        //     depth++;
        // }
        // return depth;
    }
};