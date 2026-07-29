class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            bool flag=true;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(grid[i][j]==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        return -1;
    }
};