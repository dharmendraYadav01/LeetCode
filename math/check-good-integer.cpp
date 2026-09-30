class Solution {
public:
    bool isGood(int n) {
        int squareSum = 0, digitSum = 0;
        while (n > 0) {
            digitSum += n % 10;
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum - digitSum >= 50;
    }
    bool checkGoodInteger(int n) { 
        return isGood(n); 
    }
};