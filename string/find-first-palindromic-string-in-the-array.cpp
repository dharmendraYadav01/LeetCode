class Solution {
public:
    bool isPalindrom(string s){
        string rev="";
        for(int i=s.length()-1;i>=0;i--){
            rev+=s[i];
        }
        return rev==s;
    }
    string firstPalindrome(vector<string>& words) {
        // if(words.size()<=1) return "";
        for(auto it:words){
            if(isPalindrom(it)){
                return it;
            }
        }
        return "";
    }
};