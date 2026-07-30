class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int ans = 0;
        int k = 1;
        for (int i = 0; i < n / 8; i++) {
            ans += k * 8;
            k += 1;
        }
        // while (n / 8) {
        //     ans += k * 8;
        //     k += 1;
        //     n /= 8;
        // }
        if (n) {
            ans += k * (n % 8);
        }
        return ans;
    }
};