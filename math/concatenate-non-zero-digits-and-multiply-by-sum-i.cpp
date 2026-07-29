class Solution {
public:
    long long Nonzero(int n){
        long long rem=0;
        while(n>0){
            if(n%10!=0){
                rem=rem*10+n%10;
            }
            n/=10;
        }
        return rem;
    }
    long long getSum(long long n){
        long long sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    long long sumAndMultiply(int n) {
        long long x=Nonzero(n);
        x=Nonzero(x);
        long long sum=getSum(x);
        return x*sum;
    }
};