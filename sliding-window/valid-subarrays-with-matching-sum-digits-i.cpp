class Solution {
public:
    bool isValid(long long n,int x){
        if(n==0) return x==0;
        int l=n%10;
        int f=l;
        while(n>0){
            f=n%10;
            n/=10;
        }
        return f==x && l==x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int cnt=0;
        int n=nums.size();
        vector<long long>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                long long sum=pre[r+1]-pre[l];
                if(isValid(sum,x)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};