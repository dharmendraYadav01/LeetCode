class Solution {
public:
    // string convert(int n) {
    //     string s = "";
    //     while (n > 0) {
    //         s += to_string(n % 2);
    //         n /= 2;
    //     }
    //     return s;
    // }
    bool isprime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2;i<=sqrt(n);i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            // string s = convert(i);
            // int bit = 0;
            // for (int j = 0; j < s.length(); j++) {
            //     if (s[j] == '1') {
            //         bit++;
            //     }
            // }
            if (isprime(__builtin_popcount(i))) {
                count++;
            }
        }
        return count;
    }
};