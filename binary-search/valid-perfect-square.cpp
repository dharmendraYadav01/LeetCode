class Solution {
public:
    bool isPerfectSquare(int num) {
        long val=1;
        while(val*val<=num){
            if(val*val==num){
                return true;
            }
            val++;
        }
        return false;
    }
};