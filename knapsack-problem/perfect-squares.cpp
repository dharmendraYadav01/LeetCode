class Solution {
public:
    int t[10001];
    int helper(int n){
        if(n==0){
            return 0;
        }
        int min_count=INT_MAX;
        if(t[n]!=-1){
            return t[n];
        }
        for(int i=1;i*i<=n;i++){
            int result=1+ helper(n-i*i);
            min_count=min(min_count,result);

        }
        return t[n]=min_count;
    }
    int numSquares(int n) {
        memset(t,-1,sizeof(t));
        return helper(n);
    }
};