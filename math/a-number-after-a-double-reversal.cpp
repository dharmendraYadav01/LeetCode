class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev_1=0;
        int rev_2=0;
        int orginal=num;
        while(num>0){
            rev_1=rev_1*10+(num%10);
            num/=10;
        }
        while(rev_1>0){
            rev_2=rev_2*10+(rev_1%10);
            rev_1/=10;
        }
        return rev_2==orginal;
    }
};