class Solution {
public:
    bool ischar(char ch){
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            while(i<j && !ischar(s[i])){
                i++;
            }
            while(i<j && !ischar(s[j])){
                j--;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};