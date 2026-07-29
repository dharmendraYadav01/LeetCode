class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int col=grid[0].size();
        vector<long long>pre1(col),pre2(col);
        pre1[0]=grid[0][0];
        pre2[0]=grid[1][0];
        for(int i=1;i<col;i++){
            pre1[i]=pre1[i-1]+grid[0][i];
            pre2[i]=pre2[i-1]+grid[1][i];
        }
        long long result=LLONG_MAX;
        for(int i=0;i<col;i++){
            long long top=(i==col-1)?0:pre1[col-1]-pre1[i];
            long long bottom=(i==0)?0:pre2[i-1];
            result=min(result,max(top,bottom));
        }
        return result;
    }
};