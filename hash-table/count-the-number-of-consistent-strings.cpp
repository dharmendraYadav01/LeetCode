class Solution {
public:
    bool isValid(string it,string allowed){
        for(auto i:it){
            if(allowed.find(i)==string::npos){
                return false;
            }
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(auto it:words){
            if(isValid(it,allowed)){
                count++;
            }
        }
        return count;
    }
};