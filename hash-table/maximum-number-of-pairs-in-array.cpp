class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        // using set approach 1:
        // unordered_set<int>s;
        // int count=0;
        // for(int &i:nums){
        //     if(s.count(i)){
        //         s.erase(i);
        //         count++;
        //     }else s.insert(i);
        // }
        // int num=s.size();
        // return {count,num};
        //-------------------------------
        // using hash map approach 2:
        unordered_map<int,int>mp;
        for(int &it:nums){
            mp[it]++;
        }
        int pair=0;
        int rem=0;
        for(auto &it:mp){
            pair+=it.second/2;
            rem+=it.second%2;
        }
        return {pair,rem};
    }
};