class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int sr = x;
        int er = x + k - 1;
        int sc = y;
        int ec = y + k - 1;
        while (sr < er) {
            for (int col = sc; col <= ec; col++) {
                swap(grid[sr][col], grid[er][col]);
            }
            sr++;
            er--;
        }
        return grid;
    }
};