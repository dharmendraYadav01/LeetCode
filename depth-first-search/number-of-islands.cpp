class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i,
             int j) {
        int n = grid.size();
        int m = grid[0].size();
        vis[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            // for up
            if (row - 1 >= 0 && !vis[row - 1][col] &&
                grid[row - 1][col] == '1') {
                vis[row - 1][col] = 1;
                q.push({row - 1, col});
            }
            // for down
            if (row + 1 < n && !vis[row + 1][col] &&
                grid[row + 1][col] == '1') {
                vis[row + 1][col] = 1;
                q.push({row + 1, col});
            }
            // for left
            if (col - 1 >= 0 && !vis[row][col - 1] &&
                grid[row][col - 1] == '1') {
                vis[row][col - 1] = 1;
                q.push({row, col - 1});
            }
            // for right
            if (col + 1 < m && !vis[row][col + 1] &&
                grid[row][col + 1] == '1') {
                vis[row][col + 1] = 1;
                q.push({row, col + 1});
            }
            // // for Diagonal
            // if(row-1>=0 && col+1<m && !vis[row-1][col+1] &&
            // grid[row-1][col+1]=='1'){
            //     vis[row-1][col+1]=1;
            //     q.push({row-1,col+1});
            // }

            // if(row+1<n && col+1<m && !vis[row+1][col+1] &&
            // grid[row+1][col+1]=='1'){
            //     vis[row+1][col+1]=1;
            //     q.push({row+1,col+1});
            // }

            // if(row+1<n && col-1>=0 && !vis[row+1][col-1] &&
            // grid[row+1][col-1]=='1'){
            //     vis[row+1][col-1]=1;
            //     q.push({row+1,col-1});
            // }

            // if(row-1>=0 && col-1>=0 && !vis[row-1][col-1] &&
            // grid[row-1][col-1]=='1'){
            //     vis[row-1][col-1]=1;
            //     q.push({row-1,col-1});
            // }
        }
    }
    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    bfs(grid, vis, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};