class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rowone;
        vector<int> colone;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> diff(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            int one = 0;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    one++;
                }
            }
            rowone.push_back(one);
        }
        for (int i = 0; i < n; i++) {
            int one = 0;
            for (int j = 0; j < m; j++) {
                if (grid[j][i] == 1) {
                    one++;
                }
            }
            colone.push_back(one);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                diff[i][j] = rowone[i] + colone[j] - (m - rowone[i]) - (n - colone[j]);
            }
        }
        return diff;
    }
};