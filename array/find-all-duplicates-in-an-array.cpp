class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>res;
        for(int &it:nums){
            mp[it]++;
        }
        for(auto &it:mp){
            if(it.second==2){
                res.push_back(it.first);
            }
        }
        return res;
    }
};