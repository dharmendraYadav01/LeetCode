class Solution {
public:
    long long reverse(long long digit){
        long long rev=0;
        while(digit>0){
            rev=rev*10+(digit%10);
            digit/=10;
        }
        // cout<<rev;
        return rev;
    }
    long long removeZeros(long long n) {
        long long digit=0;
        while(n!=0){
            if(n%10!=0){
                digit=digit*10+(n%10);
            }
            n/=10;
        }
        // cout<<digit;
        long long dec=reverse(digit);
        return dec;
    }
};