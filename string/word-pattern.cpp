class Solution {
public:
    void fill(string &s,vector<string>&result){
        int i=0;
        while(i<s.length()){
            int j=i;
            string res;
            while(j<s.length() && s[j]!=' '){
                res+=s[j];
                j++;
            }
            result.push_back(res);
            i=j+1;
        }
    }
    bool wordPattern(string pattern, string s) {
        unordered_set<char>st;
        unordered_map<string,char>mp;
        vector<string>result;
        fill(s,result);
        if (pattern.size() != result.size()) return false;
        for(int i=0;i<result.size();i++){
            if(mp.count(result[i])==0 && st.find(pattern[i])==st.end()){
                mp[result[i]]=pattern[i];
                st.insert(pattern[i]);
            }else if(mp[result[i]]!=pattern[i]){
                return false;
            }
        }
        return true;
    }
};