class Solution {
public:
    bool isPalindrome(int x) {
        long num=(long)x;
        long reversed=0;
        if(x>INT_MAX && x<INT_MIN){
            return false;
        }
        if(num < 0){
            return false;
        }
        while(num!=0){
            long rem=num%10;
            reversed=(reversed*10)+rem;
            num/=10;
        }
        if(reversed==x){
            return true;
        }
        return false;
    }
};