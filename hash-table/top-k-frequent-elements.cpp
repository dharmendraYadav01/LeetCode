class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int &num:nums){
            mp[num]++;
        }
        vector<pair<int,int>>num(mp.begin(),mp.end());
        sort(num.begin(),num.end(),[&](auto &a,auto &b){
            if(a.second==b.second) return a.first<b.first;
            return a.second>b.second;
        });
        vector<int>result;
        for(auto &it:num){
            if(k-->0){
                result.push_back(it.first);
            }
        }
        return result;
    }
};