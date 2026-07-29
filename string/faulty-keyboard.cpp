class Solution {
public:
    string finalString(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='i'){
                reverse(s.begin(),s.begin()+i);
            }
        }
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='i'){
                res+=s[i];
            }
        }
        return res;
    }
};