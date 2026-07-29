class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int it:arr){
            mp[it]++;
        }
        int val=0;
        for(auto it:mp){
            if(it.first==it.second){
                val=max(val,it.first);
            }
        }
        return val==0?-1:val;
    }
};