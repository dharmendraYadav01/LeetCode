class Solution {
public:
    bool isPalindrom(string& s, int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(isPalindrom(s,i,j)){
                    count++;
                }
            }
        }
        return count;
    }
};