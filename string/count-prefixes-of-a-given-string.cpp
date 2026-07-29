class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        string result="";
        int count=0;
        for(auto it:words){
            if(it==s.substr(0,it.size())){
                count++;
            }
        }
        return count;
    }
};