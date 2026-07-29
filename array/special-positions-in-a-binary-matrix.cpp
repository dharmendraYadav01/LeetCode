class Solution {
public:
    bool isValid(vector<vector<int>>& mat, int row, int col) {
        // up
        for (int i = row - 1; i >= 0; i--) {
            if (mat[i][col] == 1)
                return false;
        }

        // down
        for (int i = row + 1; i < mat.size(); i++) {
            if (mat[i][col] == 1)
                return false;
        }

        // left
        for (int j = col - 1; j >= 0; j--) {
            if (mat[row][j] == 1)
                return false;
        }

        // right
        for (int j = col + 1; j < mat[0].size(); j++) {
            if (mat[row][j] == 1)
                return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        int row = mat.size();
        int col = mat[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 1 && isValid(mat, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }
};