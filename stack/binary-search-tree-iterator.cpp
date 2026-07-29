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
class BSTIterator {
public:
    vector<int>result;
    int curr=0;
    void Inorder(TreeNode* root){
        if(!root) return;
        Inorder(root->left);
        result.push_back(root->val);
        Inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        Inorder(root);
    }
    
    int next() {
        return result[curr++];
    }
    
    bool hasNext() {
        return curr<result.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */