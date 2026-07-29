/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>ispresent;
        unordered_set<int>childSet;
        for(auto& it:descriptions){
            int parent=it[0];
            int child=it[1];
            int isleft=it[2];
            if(ispresent.count(parent)==0){ // agar parent map me nhi hai toh.
                ispresent[parent]=new TreeNode(parent);
            }
            if(ispresent.count(child)==0){ //// agar child map me nhi hai toh.
                ispresent[child]=new TreeNode(child);
            }
            if(isleft){ // connect address[parent]-->address[child].
                ispresent[parent]->left=ispresent[child];
            }else{
                ispresent[parent]->right=ispresent[child];
            }
            childSet.insert(child);
        }
        for(auto& it:descriptions){ // all child are in set if not then that is root node so return the add. of root node.
            if(childSet.count(it[0])==0) return ispresent[it[0]];
        }
        return nullptr;
    }
};