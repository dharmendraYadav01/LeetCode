class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int srow=0;
        int scol=0;
        int erow=matrix.size()-1;
        int ecol=matrix[0].size()-1;
        vector<int>result;
        while(srow<=erow && scol<=ecol){
            //top
            for(int i=scol;i<=ecol;i++){
                result.push_back(matrix[srow][i]);
            }
            // right
            for(int i=srow+1;i<=erow;i++){
                result.push_back(matrix[i][ecol]);
            }
            //bottom
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow) break;
                result.push_back(matrix[erow][i]);
            }
            // left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol) break;
                result.push_back(matrix[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return result;
    }
};