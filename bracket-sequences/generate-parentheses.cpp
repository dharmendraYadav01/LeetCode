class Solution {
public:
    bool isValid(string& curr){
        int count=0;
        for(auto &it:curr){
            if(it=='('){
                count++;
            }
            else{
                count--;
                if(count<0) return false;
            }
        }
        return count==0;
    }
    void solve(string&curr,int n,vector<string>&result){
        if(curr.length()==2*n){
            if(isValid(curr)){
                result.push_back(curr);
            }
            return;
        }
        // for "("
        curr.push_back('(');
        solve(curr,n,result);
        curr.pop_back();

        // for ")"
        curr.push_back(')');
        solve(curr,n,result);
        curr.pop_back();

    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string curr="";
        solve(curr,n,result);
        return result;
    }
};