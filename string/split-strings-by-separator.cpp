class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>result;
        for(auto &it:words){
            string s="";
            for(int i=0;i<it.length();i++){
                if(it[i]!=separator){
                    s+=it[i];
                }
                else{ 
                    if(!s.empty()){
                        result.push_back(s);
                        s="";
                    }
                }
            }
            if(!s.empty()){
                result.push_back(s);
            }
        }
        return result;
    }
};