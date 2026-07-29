class Solution {
public:
    string check(string s){
        s[0]= toupper(s[0]);
        for(int i=1;i<s.length();i++){
            s[i]= tolower(s[i]);
        }
        return s;
    }
    string generateTag(string caption) {
        int n=caption.length();
        vector<string>result;
        int i=0;
        string res="";
        while(i<n){
            if(caption[i]==' '){
                // if(!res.empty()){
                    result.push_back(res);
                // }
                res="";
                i++;
                continue;
            }
            res+=caption[i];
            i++;
        }
        if(!res.empty()){
            result.push_back(res);
        }
        for(int i=0;i<result[0].size();i++){
            result[0][i]= tolower(result[0][i]);
        }
        for(int i=1;i<result.size();i++){
            result[i]=check(result[i]);
        }
        string ans="#";
        for(auto it:result){
            ans+=it;
        }
        if(ans.size()>100){
            ans.resize(100);
        }
        ans[1]= tolower(ans[1]);
        return ans;
    }
};