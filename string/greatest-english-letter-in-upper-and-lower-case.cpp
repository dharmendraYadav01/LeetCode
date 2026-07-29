class Solution {
public:
    string greatestLetter(string s) {
        set<char>st;
        for(char c:s){
            st.insert(c);
        }
        string res="";
        for(char c:st){
            if(islower(c)){
                continue;
            }
            char x=tolower(c);
            if(st.find(x)!=st.end()){
                res+=c;
            }
        }
        sort(res.begin(),res.end());
        string flag="";
        if(res.size()>1){
            int n=res.size()-1;
            flag+=res[n];
            return flag;
        }
        return res;
    }
};