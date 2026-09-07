class Solution {
public:
    void Solve(string s,string ans,int idx,unordered_set<string>&st){
        if(idx>=s.length()){
            if(!ans.empty()) st.insert(ans);
            return;
        }
        ans.push_back(s[idx]);
        Solve(s,ans,idx+1,st);
        ans.pop_back();
        Solve(s,ans,idx+1,st);
    }
    int distinctSubseqII(string s) {
        unordered_set<string>st;
        Solve(s,"",0,st);
        return st.size();
    }
};