class Solution {
public:
    int dp[101][101];
    // int solve(int i, int j, int row, int col,vector<vector<int>>&
    // obstacleGrid) {
    //     if(obstacleGrid[i][j]==1) return 0;
    //     if (i == row - 1 && j == col - 1)
    //         return 1;
    //     int ans=0;
    //     ans += i + 1 < row && obstacleGrid[i + 1][j] != 1 ? solve(i + 1, j,
    //     row, col,obstacleGrid): 0; ans += j + 1 < col && obstacleGrid[i][j +
    //     1] != 1 ? solve(i, j + 1, row, col,obstacleGrid): 0; return ans;
    // }
    int solve(int i, int j, int row, int col,
              vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[i][j] == 1)
            return 0;
        if (i == row - 1 && j == col - 1)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        int ans = 0;
        ans += i + 1 < row && obstacleGrid[i + 1][j] != 1
                   ? solve(i + 1, j, row, col, obstacleGrid)
                   : 0;
        ans += j + 1 < col && obstacleGrid[i][j + 1] != 1
                   ? solve(i, j + 1, row, col, obstacleGrid)
                   : 0;
        return dp[i][j] = ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp, -1, sizeof(dp));
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return solve(0, 0, m, n, obstacleGrid);
    }
};