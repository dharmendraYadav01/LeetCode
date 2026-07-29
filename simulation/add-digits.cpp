class Solution {
public:
    int sum_val(int n){
        int dig=0;
        while(n!=0){
            dig+=n%10;
            n/=10;
        }
        return dig;
    }
    int addDigits(int num) {
        int digit=num;
        while(digit>9){
            digit=sum_val(digit);
        }
        return digit;
    }
};