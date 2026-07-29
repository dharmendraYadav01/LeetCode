class Solution {
public:
    int subtractProductAndSum(int n) {
        int product_digit=1;
        int sum_digit=0;
        int rem=0;
        if(n==0){
            return 0;
        }
        while(n>0){
            rem=n%10;
            n/=10;
            product_digit*=rem;
            sum_digit+=rem;
        }
        return product_digit-sum_digit;
    }
};