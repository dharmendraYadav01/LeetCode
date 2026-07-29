class Solution {
public:
    int help(vector<string>& str,int m,int n,int idx,vector<vector<vector<int>>>&dp){
        //base case
        if(idx==str.size()) return 0;

        if(dp[idx][m][n]!=-1) return dp[idx][m][n];

        int o=0,z=0;
        for(char c:str[idx]){
            if(c=='1') o++;
            else z++;
        }

        int ignore=help(str,m,n,idx+1,dp);

        int accept=0;
        if(m>=z && n>=o){
            accept=1+help(str,m-z,n-o,idx+1,dp);
        }
        return dp[idx][m][n]=max(ignore,accept);
    }
    int findMaxForm(vector<string>& str, int m, int n) {
        vector<vector<vector<int>>>dp(str.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return help(str,m,n,0,dp);
    }
};