class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        //approach 1:
        vector<int>key_idx;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key) key_idx.push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<key_idx.size();j++){
                if(abs(i-key_idx[j])<=k){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
        //approach 2:
        // vector<int> ans;
        // for (int j = 0; j < nums.size(); j++) {
        //     if (nums[j] == key) {
        //         for (int i = 0; i < nums.size(); i++) {
        //             if (abs(i - j) <= k) {
        //                 if (ans.empty())
        //                     ans.push_back(i);
        //                 if (!ans.empty() &&
        //                     find(ans.begin(), ans.end(), i) == ans.end())
        //                     ans.push_back(i);
        //             }
        //         }
        //     }
        // }
        // sort(ans.begin(), ans.end());
        // return ans;
    }
};