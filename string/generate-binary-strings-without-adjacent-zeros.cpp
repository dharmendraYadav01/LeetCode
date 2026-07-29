class Solution {
public:
    void sub(vector<string>&result,string curr,int len){
        if(curr.length()==len){
            result.push_back(curr);
            return;
        }
        if(curr.empty() || curr.back()!='0'){
            sub(result,curr+"0",len);
        }
        sub(result,curr+"1",len);
    }
    vector<string> validStrings(int n) {
        vector<string>result;
        sub(result,"",n);
        return result;
    }
};