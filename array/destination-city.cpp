class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>s1;
        unordered_set<string>s2;
        for(auto it:paths){
            s1.insert(it[0]);
            s2.insert(it[1]);
        }
        for(auto it:s2){
            if(find(s1.begin(),s1.end(),it)==s1.end()){
                return it;
            }
        }
        return "";
    }
};