class Solution {
public:
    char findTheDifference(string s, string t) {
        char res;
        unordered_map<char,int>mp;
        for(char it:t){
            mp[it]++;
        }
        for(char it:s){
            mp[it]--;
        }
        for(auto  it:mp){
            if(it.second==1){
                res+=it.first;
            }
        }
        return res;
    }
};