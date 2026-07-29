class Solution {
public:
    bool isPalindrom(string& s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxlen=-1;
        int idx=-1;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(isPalindrom(s,i,j) && j-i+1>maxlen){
                    maxlen=j-i+1;
                    idx=i;
                }
            }
        }
        return s.substr(idx,maxlen);
    }
};