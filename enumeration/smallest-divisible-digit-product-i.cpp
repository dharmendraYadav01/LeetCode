class Solution {
public:
    int digit(int n) {
        int ans = 1;
        while (n != 0) {
            ans *= n % 10;
            n /= 10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        while (true) {
            int k = digit(n);
            if (k % t == 0)
                return n;
            n++;
        }
        return 0;
    }
};