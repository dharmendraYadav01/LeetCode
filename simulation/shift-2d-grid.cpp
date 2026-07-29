class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> temp;
        // for(int i=0;i<m;i++){
        //     temp.push_back(grid[i][n-1]);
        // }
        while (k--) {
            for (int j = n - 1; j > 0; j--) {
                for (int i = 0; i < m; i++) {
                    swap(grid[i][j], grid[i][j - 1]);
                }
            }
            int i=m-1;
            // int temp=grid[m-1][0];
            while(i>0){
                swap(grid[i-1][0],grid[i][0]);
                i--;
            }
        }
        return grid;
    }
};
// 3
// 9
// 6--i