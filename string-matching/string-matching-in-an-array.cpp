class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>result;
        for(int it=0;it<words.size();it++){
            for(int i=0;i<words.size();i++){
                if(it!=i && words[i].find(words[it])!=string::npos){
                    result.push_back(words[it]);
                    break;
                }
            }
            
        }
        return result;
    }
};