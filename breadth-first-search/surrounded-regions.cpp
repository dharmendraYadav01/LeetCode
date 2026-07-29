class Solution {
public:
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        vis[r][c] = 1;
        for (int i = 0; i < 4; i++) {
            int nr = r + drow[i];
            int nc = c + dcol[i];
            if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && !vis[nr][nc] && grid[nr][nc] == 'O') {
                dfs(nr, nc, grid, vis);
            }
        }
    }
    void solve(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        // for first and last row traversal
        for (int j = 0; j < m; j++) {
            // first row
            if (grid[0][j] == 'O' && !vis[0][j]) {
                dfs(0, j, grid, vis);
            }
            // last row
            if (grid[n - 1][j] == 'O' && !vis[n - 1][j]) {
                dfs(n - 1, j, grid, vis);
            }
        }
        // for first and last col traversal
        for (int i = 0; i < n; i++) {
            // first row
            if (grid[i][0] == 'O' && !vis[i][0]) {
                dfs(i, 0, grid, vis);
            }
            // last row
            if (grid[i][m - 1] == 'O' && !vis[i][m - 1]) {
                dfs(i, m - 1, grid, vis);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 'O' && !vis[i][j]) {
                    grid[i][j] = 'X';
                }
            }
        }
    }
};