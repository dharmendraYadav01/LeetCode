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
    void CreateMP(map<int, int>& mp, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
    }
    TreeNode* CreateTree(vector<int>& inorder, vector<int>& postorder, int &idx_post, int inorderStart, int inorderEnd, map<int, int>& mp) {
        // base case
        if (idx_post < 0 || inorderStart > inorderEnd) {
            return NULL;
        }

        int element=postorder[idx_post--];
        TreeNode* root=new struct TreeNode(element);

        // so this node N
        int pos=mp[element];
        // right come first becoz in psotorder order is ----> LRN
        
        // right call
        root->right=CreateTree(inorder, postorder, idx_post, pos + 1 , inorderEnd , mp);
        // left call
        root->left=CreateTree(inorder, postorder, idx_post, inorderStart , pos - 1, mp);
       
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n = postorder.size();
        int idx_post = n - 1;
        map<int, int> mp;
        CreateMP(mp, inorder);
        TreeNode* ans = CreateTree(inorder, postorder, idx_post, 0, n - 1, mp);
        return ans;
    }
};