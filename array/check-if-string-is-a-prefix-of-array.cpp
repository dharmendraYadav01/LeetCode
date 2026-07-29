class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result="";
        for(auto it:words){
            result+=it;
            if(result==s){
                return true;
            }
        }
        return false;
    }
};