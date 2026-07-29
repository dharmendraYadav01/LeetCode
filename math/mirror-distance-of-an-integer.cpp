class Solution {
public:
    int reverse(int n) {
        int temp = 0;
        while (n > 0) {
            temp = temp * 10 + (n % 10);
            n /= 10;
        }
        return temp;
    }
    int mirrorDistance(int n) { 
        return abs(n - reverse(n)); 
    }
};