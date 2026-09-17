class Solution {
public:
    int ans=INT_MAX;
    int dp[201][201];
    int Solve(int sr,int sc,int m,int n,vector<vector<int>>& grid){
        if(sr==m && sc==n){
            return grid[sr][sc];
        }
        if(dp[sr][sc]!=-1){
            return dp[sr][sc];
        }
        if(sr>m || sc>n){
            return ans;
        }
        int right=Solve(sr,sc+1,m,n,grid);
        int down=Solve(sr+1,sc,m,n,grid);
        return dp[sr][sc]=grid[sr][sc]+min(right,down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        memset(dp,-1,sizeof(dp));
        return Solve(0,0,m,n,grid);
    }
};