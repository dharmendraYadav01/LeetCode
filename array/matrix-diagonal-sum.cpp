class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        // int n=mat[0].size();
        int primary=0;
        int secondary=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    primary+=mat[i][j];
                }
                if((i+j)==(m-1) && i!=j){
                    secondary+=mat[i][j];
                }
            }
        }

        return primary+secondary;
    }
};