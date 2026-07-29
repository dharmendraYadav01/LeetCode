class Solution {
public:
    bool isUpper(string word){
        for(int i=0;i<word.size();i++){
            if(!isupper(word[i])){
                return false;
            }
        }
        return true;
    }
    bool isLower(string word){
        for(int i=0;i<word.size();i++){
            if(!islower(word[i])){
                return false;
            }
        }
        return true;
    }
    bool isupperlower(string word){
        for(int i=1;i<word.length();i++){
            if(!isupper(word[0])){
                return false;
            }else if(!islower(word[i])){
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(!word.empty() && isUpper(word)){
            return true;
        }
        else if(!word.empty() && isLower(word)){
            return true;
        }
        else if(!word.empty() && isupperlower(word)){
            return true;
        }
        return false;
    }
};