class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row ,int col,char digit){
        for(int j=0;j<9;j++){
            if(j!=col && board[row][j]==digit){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(i!=row && board[i][col]==digit){
                return false;
            }
        }
        int srow=(row/3)*3;
        int scol=(col/3)*3;
        for(int i=srow;i<srow+3;i++){
            for(int j=scol;j<scol+3;j++){
                if((i!=row || j!=col) && board[i][j]==digit){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]!='.'){
                    if(!isSafe(board,row,col,board[row][col])){
                        return false;
                    }   
                }
                
            }
        }
        return true;
    }
};