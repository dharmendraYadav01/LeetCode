class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string>result;
        string s="";
        for(int i=0;i<title.length();i++){
            if(title[i]!=' '){
                s+=tolower(title[i]);
            }
            else{
                if(!s.empty()){
                    result.push_back(s);
                    s="";
                }
            }
        }
        if(!s.empty()) result.push_back(s);
        string res="";
        for(auto it=0;it<result.size();it++){
            if(result[it].length()>2){
                result[it][0]=toupper(result[it][0]);
                res+=result[it];
            }else{
                res+=result[it];
            }
            if(it==result.size()-1){
                break;
            }
            res+=' ';
        }
        return res;
    }
};