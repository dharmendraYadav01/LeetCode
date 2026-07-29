class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        for(int it:s){
            mp[it]++;
        }
        int res=0;
        for(auto it:mp){
            while(it.second>=3){
                res+=2;
                it.second-=2;
            }
        }
        return s.length()-res;
    }
};