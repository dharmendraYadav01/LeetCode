class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000)
            return 0;
        long long res = 0;
        if (n >= 1000 && n <= 999999) {
            res += n - 1000 + 1;
        }
        if (n >= 1000000 && n <= 999999999) {
            res += n - 1000000 + 1;
        }
        if (n >= 1000000000 && n <= 999999999999) {
            res += n - 1000000000 + 1;
        }
        if (n >= 1000000000000 && n <= 999999999999999) {
            res += n - 1000000000000 + 1;
        }
        if (n >= 1000000000000000 && n <= 999999999999999999) {
            res += n - 1000000000000000 + 1;
        }
        return res;
    }
};