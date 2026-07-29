class Solution {
public:
    void makeGrid(int row,int col,vector<vector<char>>&grid){
        // left mark
        for(int i=col-1;i>=0;i--){
            if(grid[row][i]=='G' ||  grid[row][i]=='W'){
                break;
            }
            grid[row][i]='R';
        }
        
        // right mark
        for(int j=col+1;j<grid[0].size();j++){
            if(grid[row][j]=='G' ||  grid[row][j]=='W'){
                break;
            }
            grid[row][j]='R';
        }

        // up mark
        for(int i=row-1;i>=0;i--){
            if(grid[i][col]=='G' ||  grid[i][col]=='W'){
                break;
            }
            grid[i][col]='R';
        }

        // down mark
        for(int j=row+1;j<grid.size();j++){
            if(grid[j][col]=='G' ||  grid[j][col]=='W'){
                break;
            }
            grid[j][col]='R';
        }

    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>>grid(m,vector<char>(n,'C'));
        for(auto it:guards){
            int i=it[0];
            int j=it[1];
            grid[i][j]='G';
        }
        for(auto it:walls){
            int i=it[0];
            int j=it[1];
            grid[i][j]='W';
        }
        for(auto it:guards){
            int i=it[0];
            int j=it[1];
            makeGrid(i,j,grid);
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='C'){
                    count++;
                }
            }
        }
        return count;
    }
};