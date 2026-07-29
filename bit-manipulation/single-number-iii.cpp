class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums){
            mp[it]++;
        }
        vector<int>result;
        for(auto &it:mp){
            if(it.second==1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};