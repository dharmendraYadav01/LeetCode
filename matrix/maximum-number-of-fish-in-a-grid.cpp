class Solution {
public:
    int m;
    int n;
    int dfs(int i,int j,vector<vector<int>>& grid){
        vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return 0;
        }
        int fishcount=grid[i][j];
        grid[i][j]=0;
        for(auto &it:dir){
            int i_=i+it[0];
            int j_=j+it[1];
            fishcount+=dfs(i_,j_,grid);
        }
        return fishcount;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        n=grid[0].size();
        m=grid.size();
        int maxfish=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    maxfish=max(maxfish,dfs(i,j,grid));
                }
            }
        }
        return maxfish;
    }
};