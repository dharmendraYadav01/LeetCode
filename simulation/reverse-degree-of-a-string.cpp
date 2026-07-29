class Solution {
public:
    int reverseDegree(string s) {
        map<char,int>mp;
        for(auto i='a';i<='z';i++){
            mp[i]='z'-i+1;
        }
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=(i+1)*mp[s[i]];
        }
        return sum;
    }
};