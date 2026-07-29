class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int mid;
        int end=m*n-1;
        bool result=false;
        while(start<=end){
            mid=start+(end-start)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};