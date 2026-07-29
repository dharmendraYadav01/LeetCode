class Solution {
    void possiblesub(string& s,int pos,int& maxcount,unordered_set<string>& uniquesub){
        if(pos==s.size()){
            if(maxcount<uniquesub.size()){
            maxcount=uniquesub.size();
            }
            return; 
        }
        string substring;
        for(int i=pos;i<s.size();i++){
            substring.push_back(s[i]);
            if(uniquesub.count(substring)==0){
                uniquesub.insert(substring);
                possiblesub(s,i+1,maxcount,uniquesub);
                uniquesub.erase(substring);
            }
        }
    }
public:
    int maxUniqueSplit(string s) {
        int maxcount=0;
        unordered_set<string> uniquesub;
        possiblesub(s,0,maxcount,uniquesub);
        return maxcount; 
    }
};