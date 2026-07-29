class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        int sr = 0, er = m - 1;
        int sc = 0, ec = n - 1;
        deque<pair<int, pair<int, int>>> dq;
        vector<vector<int>> dist(m, vector<int>(n, 1e9));
        vector<int> dr = {-1, 0, 1, 0};
        vector<int> dc = {0, 1, 0, -1};
        dq.push_front({grid[sr][sc], {sr, sc}});
        dist[sr][sc] = grid[sr][sc];
        while (!dq.empty()) {
            int d = dq.front().first;
            int r = dq.front().second.first;
            int c = dq.front().second.second;
            dq.pop_front();
            if (r == er && c == ec)
                break;
            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    int nd = d + grid[nr][nc];
                    if (nd < dist[nr][nc]) {
                        dist[nr][nc] = nd;
                        if (grid[nr][nc] == 1) {
                            dq.push_back({nd, {nr, nc}});
                        } else {
                            dq.push_front({nd, {nr, nc}});
                        }
                    }
                }
            }
        }
        return health - dist[er][ec] > 0;
    }
};