class Solution {
public:
    int product(int n){
        int pro=1;
        while(n!=0){
            pro*=n%10;
            n/=10;
        }
        return pro;
    }
    int sum(int n){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    bool checkDivisibility(int n) {
        int a=sum(n);
        int b=product(n);
        int sum=a+b;
        if(n%sum==0) return true;
        return false;
    }
};