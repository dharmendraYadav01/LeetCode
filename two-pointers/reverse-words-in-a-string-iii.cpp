class Solution {
public:
    string reverseWords(string s) {
        int pre=0;
        for(int i=0;i<s.length();i=pre+1){
            pre=i;
            while(pre<s.length() && s[pre]!=' '){
                pre++;
            }
            reverse(s.begin()+i,s.begin()+pre);
        }
        return s;
    }
};

// "sL'et etka eLdeoeCt tcsoent"