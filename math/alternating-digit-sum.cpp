class Solution {
public:
    int reverse(int &n){
        int temp=0;
        while(n!=0){
            temp=temp*10+n%10;
            n/=10;
        }
        return temp;
    }
    int alternateDigitSum(int n) {
        int sum1=0;
        int sum2=0;
        int temp=reverse(n);
        while(temp!=0){
            sum1+=temp%10;
            temp/=10;
            sum2+=temp%10;
            temp/=10;
        }
        return sum1-sum2;

    }
};