class Solution {
public:
    bool bit(int n) {
        string s = "";
        while (n > 0) {
            s += to_string(n % 2);
            n /= 2;
        }
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] != s[i + 1])
                return 0;
        }
        return 1;
    }
    int countMonobit(int n) {
        int count = 1;
        for (int i = 1; i <= n; i++) {
            if (bit(i)) {
                count++;
            }
        }
        return count;
    }
};