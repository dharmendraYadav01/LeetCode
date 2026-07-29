class Solution {
public:
    int CountP(int row, int col, vector<vector<char>>& board) {
        int count = 0;
        // left mark
        for (int i = col - 1; i >= 0; i--) {
            if (board[row][i] == 'B')
                break;
            if (board[row][i] == 'p') {
                count++;
                break;
            }
        }

        // right mark
        for (int j = col + 1; j < board[0].size(); j++) {
            if (board[row][j] == 'B')
                break;
            if (board[row][j] == 'p') {
                count++;
                break;
            }
        }

        // up mark
        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'B')
                break;
            if (board[i][col] == 'p') {
                count++;
                break;
            }
        }

        // down mark
        for (int j = row + 1; j < board.size(); j++) {
            if (board[j][col] == 'B')
                break;
            if (board[j][col] == 'p') {
                count++;
                break;
            }
        }
        return count;
    }
    int numRookCaptures(vector<vector<char>>& board) {
        int count = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == 'R') {
                    count = CountP(i, j, board);
                }
            }
        }
        return count;
    }
};