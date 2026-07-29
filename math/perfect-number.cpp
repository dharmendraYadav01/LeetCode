class Solution {
public:
    bool isPerfect(int num){
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        }
        if(sum==num){
            return true;
        }
        return false;
    }
    bool checkPerfectNumber(int num) {
        return isPerfect(num);
    }
};