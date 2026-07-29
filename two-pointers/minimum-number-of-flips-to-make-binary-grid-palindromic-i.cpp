class Solution {
public:
    int min_pali(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int count = 0;
        while (i < j) {
            if (nums[i] != nums[j]) {
                count++;
            }
            i++;
            j--;
        }
        return count;
    }
    int minFlips(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int row_count = 0;
        int col_count = 0;

        // for checking row wise
        for (auto row : grid) {
            row_count += min_pali(row);
        }

        // for checking col wise
        for (int col = 0; col < n; col++) {
            for (int top = 0; top < m / 2; top++) {
                int bottom = m - top - 1; // find bottom element
                if (grid[top][col] != grid[bottom][col]) {
                    col_count++;
                }
            }
        }
        return min(col_count, row_count);
    }
};