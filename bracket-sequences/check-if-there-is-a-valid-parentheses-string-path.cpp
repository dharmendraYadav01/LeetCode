class Solution {
public:
    int m, n;
    int dp[101][101][201];
    bool Solve(vector<vector<char>>& grid, int i, int j, int cnt) {
        cnt += (grid[i][j] == '(') ? 1 : -1;
        if (cnt < 0)
            return false;

        if (dp[i][j][cnt] != -1) {
            return dp[i][j][cnt];
        }

        if (i == m - 1 && j == n - 1)
            return dp[i][j][cnt] = cnt == 0;

        // right traverse
        if (i + 1 < m) {
            if (Solve(grid, i + 1, j, cnt)) {
                return dp[i][j][cnt] = true;
            }
        }

        // down traverse
        if (j + 1 < n) {
            if (Solve(grid, i, j + 1, cnt)) {
                return dp[i][j][cnt] = true;
            }
        }
        return dp[i][j][cnt] = false;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if ((m + n - 1) % 2 == 1)
            return false;
        if (grid[0][0] == ')' || grid[m - 1][n - 1] == '(')
            return false;
        memset(dp, -1, sizeof(dp));
        return Solve(grid, 0, 0, 0);
    }
};