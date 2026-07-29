class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto& it:grid){
            sort(it.rbegin(),it.rend());
        }
        int sum=0;
        int col=grid[0].size();
        int row=grid.size();
        for(int i=0;i<col;i++){
            int max_val=0;
            for(int j=0;j<row;j++){
                max_val=max(max_val,grid[j][i]);
            }
            sum+=max_val;
        }
        return sum;
    }
};