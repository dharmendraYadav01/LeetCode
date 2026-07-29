class Solution {
public:
    string modifyString(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
                for(char c='a';c<='z';c++){
                    if((i>0 && s[i-1]==c)||(i+1<s.length() && s[i+1]==c)){
                        continue;
                    }else{
                        s[i]=c;
                        break;
                    }
                }
            }
        }
        return s;
    }
};