class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        int sr = 0;
        int sc = 0;
        int dr = n - 1;
        int dc = m - 1;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,greater<pair<int, pair<int, int>>>>pq;
        vector<vector<int>> dis(n, vector<int>(m, INT_MAX));
        dis[sr][sc] = 0;
        pq.push({0, {0, 0}});
        int dir_r[] = {-1, 0, 1, 0};
        int dir_c[] = {0, 1, 0, -1};
        while (!pq.empty()) {
            int d = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            pq.pop();
            if (r == dr && c == dc)
                return d;
            for (int i = 0; i < 4; i++) {
                int nr = dir_r[i] + r;
                int nc = dir_c[i] + c;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    int diff = abs(heights[nr][nc] - heights[r][c]);
                    int neweffort = max(diff, d);
                    if (neweffort < dis[nr][nc]) {
                        dis[nr][nc] = neweffort;
                        pq.push({dis[nr][nc], {nr, nc}});
                    }
                }
            }
        }
        return 0;
    }
};