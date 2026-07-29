class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        vector<int>result;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        for(int i=1;i<result.size();i++){
            if(result[i-1]!=result[i]){
                return false;
            }
        }
        return true;
    }
};