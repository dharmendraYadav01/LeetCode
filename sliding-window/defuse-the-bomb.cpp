class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        int preSum=0;
        int sufxSum=0;
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
            if(k>0){
                for(int j=1;j<=k;j++){
                    sum+=code[(i+j)%n];
                }
            }
            else if(k<0){
                for(int j=1;j<=-k;j++){
                    sum+=code[(i-j+n)%n];
                }
            }
            result[i]=sum;
        }
            
        return result;
    }
};