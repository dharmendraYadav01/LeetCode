class Solution {
public:
    // int Find(vector<int>&result){
    //     int min_val=INT_MAX;
    //     for(int it:result){
    //         min_val=min(min_val,it);
    //     }
    //     return min_val;
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        for(int i=size-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};