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
    int minswap(vector<int>&vec){
        int swaps=0;
        vector<int> sortvec(vec.begin(),vec.end()) ;
        sort(sortvec.begin(),sortvec.end());
        unordered_map<int,int>mp;
        for(int i=0;i<vec.size();i++){
            mp[vec[i]]=i;
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]==sortvec[i]){
                continue;
            }
            int curridx=mp[sortvec[i]];
            mp[vec[i]]=curridx;
            swap(vec[curridx],vec[i]);
            swaps++;
        }
        return swaps;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int result=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>vec;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                vec.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            result+=minswap(vec);

        }
        return result;
        }
};