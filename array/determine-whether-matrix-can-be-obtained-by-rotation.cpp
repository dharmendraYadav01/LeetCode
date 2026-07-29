class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        vector<vector<int>>res(n,vector<int>(n));
        for(int rotation=0;rotation<4;rotation++){
            if(mat==target){
                return true;
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    res[j][n-1-i]=mat[i][j];
                }
            }
            mat=res;
        }
        return false;
    }
};