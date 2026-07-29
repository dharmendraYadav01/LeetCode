class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int col,char digit){
        // first we check horizontally
        for(int j=0;j<9;j++){
            if(board[row][j]==digit){
                return false;
            }
        }
        // Second we check vertically
        for(int i=0;i<9;i++){
            if(board[i][col]==digit){
                return false;
            }
        }
        // Third we check in the Grid(3*3)
        int srow=(row/3)*3; // starting row of every grid is multiple of 3
        int scol=(col/3)*3; // starting col of every grid is multiple of 3
        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
                if(board[i][j]==digit){
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board,int row,int col){
        // base case when row=9 means sudoku complete
        if(row==9){
            return true;
        }

        // thet row&col contain already number then move to next(here we traversing rowwise so row will same and col is col+1)
        int nextrow=row;
        int nextcol=col+1;
        if(col==9){ // but if col is 9 means out of boundary then next move to next row;
            nextrow=row+1;
            nextcol=0;
        }
        // if on that row & col contain already any number 
        if(board[row][col]!='.'){
            return helper(board,nextrow,nextcol);
        }
        // if that row and col is '.' then put valid digit  from 1 to 9
        for(char digit='1';digit<='9';digit++){
            // thet digit is valid means that digit is not present in horizontally , vertically or in the grid
            if(isSafe(board,row,col,digit)){
                // then put on the board
                board[row][col]=digit;
                // and move to nextrow and nextcol
                if(helper(board,nextrow,nextcol)){
                    return true;
                }
                // if non valid digit then again put '.' on board
                board[row][col]='.';
            }
        }
        // no valid digit found to put in grid
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        // initially row and col are 0.
        helper(board,0,0);
    }
};