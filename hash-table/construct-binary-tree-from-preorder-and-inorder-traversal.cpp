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
    void createMap(map<int, int>& mp, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        return;
    }
    TreeNode* ConvertTree(vector<int>& preorder, vector<int>& inorder,int& index_pre, int inorderStart, int inorderEnd, map<int, int>& mp) {
        // Base case
        if (index_pre >= preorder.size() || inorderStart > inorderEnd) {
            return NULL;
        }
        // First element of preorder is always root node
        int element = preorder[index_pre++];
        // push that node in tree as root node
        TreeNode* root = new struct TreeNode(element);

        // find position of that element in inorder for left and right traversal
        int pos = mp[element];

        root->left = ConvertTree(preorder, inorder, index_pre, inorderStart,
                                 pos - 1, mp);
        root->right =
            ConvertTree(preorder, inorder, index_pre, pos + 1, inorderEnd, mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index_pre = 0;
        int n = preorder.size();
        map<int, int> mp;
        createMap(mp, inorder);
        TreeNode* ans = ConvertTree(preorder, inorder, index_pre, 0, n - 1, mp);
        return ans;
    }
};