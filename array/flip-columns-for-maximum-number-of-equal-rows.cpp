class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int maxRows=0;
        for(auto& val :matrix){
            vector<int>inverted(n);
            for(int col=0;col<n;col++){
                inverted[col]=val[col]==0?1:0;
            }
            int count=0;
            for(auto&row:matrix){
                if(row==val || row==inverted){
                    count++;
                }
            }
            maxRows=max(maxRows,count);
        }
        return maxRows;
        // for(int row=0;row<matrix.size();row++){
        //     for(int col=0;col<matrix.size();col++){
        //         if(matrix[row][col]==0){
        //             matrix[row][col]=1;
        //         }
        //         else if(matrix[row][col]==1){
        //             matrix[row][col]=0;
        //         }
        //     }
        // }
        // int sum=0;
        // int maxsum=0;
        // for(int row=0;row<matrix.size();row++){
        //     for(int col=0;col<matrix.size();col++){
        //         sum+=matrix[row][col];
        //     }
        //     if(maxsum==sum){
        //         count++;
        //     }
        //     maxsum=sum;
        // }
        
    }
};