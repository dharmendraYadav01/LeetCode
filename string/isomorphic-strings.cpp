class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        set<char>st;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])==0 && st.find(t[i])==st.end()){
                mp[s[i]]=t[i];
                st.insert(t[i]);
            }
            else if(mp[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};