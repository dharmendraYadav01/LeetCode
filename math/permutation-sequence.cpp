class Solution {
public:
    string getPermutation(int n, int k) {
        string res="";
        for(int i=1;i<=n;i++){
            res+=to_string(i);
        }
        // cout<<res;
        string ans=res;
        k--;
        while(next_permutation(res.begin(),res.end()) && k--){
            ans=res;
        }
        return ans;
    }
};