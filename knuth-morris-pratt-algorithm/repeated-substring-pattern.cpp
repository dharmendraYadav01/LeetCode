class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string dup=s+s;
        return dup.substr(1,dup.size()-2).find(s)!=string::npos;
    }
};