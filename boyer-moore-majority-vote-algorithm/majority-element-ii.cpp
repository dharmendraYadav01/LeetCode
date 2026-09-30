class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        // set<int>s;
        vector<int>res;
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        for(auto &it:mp){
            // int num=nums[i];
            if(it.second>n/3){
                res.push_back(it.first);
            }
        }
        // for(auto &it:s){
        //     res.push_back(it);
        // }
        return res;
    }
};