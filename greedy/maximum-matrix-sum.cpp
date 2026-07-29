class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int minSum=INT_MAX;
        long long sum=0;
        int m=matrix.size();
        int count=0;
        int n=matrix[0].size();            
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                int val=matrix[row][col];
                sum+=abs(val);
                minSum=min(minSum,abs(val));
                if(val<0){
                    count++;
                }
            }
        }
        if(count%2!=0){
            sum= sum-(2*minSum); 
        }
        return sum;
    }
};