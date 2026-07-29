class Solution {
public:
    string replaceDigits(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            int count = s[i]-'0';
            if(isdigit(s[i])){
                res+=char(count+s[i-1]);
            }else{
                res+=s[i];
            }
        }
        return res;
    }
};