class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums){
            mp[it]++;
        }
        int val=0;
        for(auto &it:mp){
            if(it.second==1){
                val=it.first;
            }
        }
        return val;
    }
};