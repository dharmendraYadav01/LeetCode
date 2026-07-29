class Solution {
public:
    // string find(int b) {
    //     string res = "";
    //     while (b > 0) {
    //         res += to_string(b % 2);
    //         b /= 2;
    //     }
    //     reverse(res.begin(), res.end());
    //     return res;
    // }
    int concatenatedBinary(int n) {
        const long MOD = 1e9 + 7;
        // string s = "";
        // for (int i = 1; i <= n; i++) {
        //     s += find(i);
        // }
        // long long rem = 0;

        // for (char c : s) {
        //     rem = (rem * 2 + (c - '0')) % MOD;
        // }
        // return rem;
        // approach 2
        // long result = 0;
        // for (int i = 1; i <= n; i++) {
        //     int dig = log2(i) + 1; // find how many in num i.e i
        //     result = ((result << dig) % MOD + i) % MOD;
        // }
        // approach 3
        int dig = 0;
        long result = 0;
        for (int i = 1; i <= n; i++) {
            if ((i & (i - 1)) == 0) // it check the given no. is in the power of 2
                dig++;
            result = ((result << dig) + i) % MOD;
        }
        return result;
    }
};