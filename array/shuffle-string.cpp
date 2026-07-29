class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int idx=0;
        string res=s;
        for(int i=0;i<s.length();i++){
            res[indices[idx]]=s[i];
            idx++;
        }
        return res;
    }
};