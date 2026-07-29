/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createParent(map<TreeNode*, TreeNode*>& nodeParent,
                           TreeNode* root, int start) {
        queue<TreeNode*> q;
        TreeNode* res = NULL;
        q.push(root);
        nodeParent[root] = NULL;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->val == start) {
                res = curr;
            }
            if (curr->left) {
                nodeParent[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                nodeParent[curr->right] = curr;
                q.push(curr->right);
            }
        }
        return res;
    }
    int infected(TreeNode* root, map<TreeNode*, TreeNode*>& nodeParent) {
        int ans = 0;
        map<TreeNode*, bool> visited;
        queue<TreeNode*> node;
        visited[root] = 1;
        node.push(root);
        while (!node.empty()) {
            bool flag = false;
            int size = node.size();
            // we go on queue size becoz if node has left and right then check for both in queue
            for (int i = 0; i < size; i++) {
                TreeNode* front = node.front();
                node.pop();

                // for left check
                if (front->left && !visited[front->left]) {
                    flag = true; // node addition 
                    visited[front->left] = 1;
                    node.push(front->left);
                }
                // for right check
                if (front->right && !visited[front->right]) {
                    flag = true; // node addition 
                    visited[front->right] = 1;
                    node.push(front->right);
                }
                // for parent check
                if (nodeParent[front] && !visited[nodeParent[front]]) {
                    flag = true; // node addition 
                    visited[nodeParent[front]] = 1;
                    node.push(nodeParent[front]);
                }
            }
            // whenever node addition happen then only time increase else kuch maath kro 
            if (flag) {
                ans++;
            }
        }
        return ans;
    }
    int amountOfTime(TreeNode* root, int start) {
        // create map to store parents of that node
        map<TreeNode*, TreeNode*> nodeParent;
        // this fn create node->parent mapping and return that target or start
        // node
        TreeNode* startNode = createParent(nodeParent, root, start);
        // check neighbour means for particular node neighbour is parent , left
        // and right
        int time = infected(startNode, nodeParent);
        return time;
    }
};