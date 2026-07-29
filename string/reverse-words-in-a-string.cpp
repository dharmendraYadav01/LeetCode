class Solution {
public:
    string reverseWords(string s) {
        string result="";
        int i=s.length()-1;
        int j=0;
        while(i>=0){
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;
            string res="";
            while(i>=0 && s[i]!=' '){
                res+=s[i];
                i--;
            }
            reverse(res.begin(),res.end());
            if (!result.empty()) result += " ";
            result += res;
            // result+=res;
            // result+=' ';
            // i--;
        }
        return result;
    }
};