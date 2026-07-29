class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        string res = "";
        string result = "";
        while (n > 0) {
            res += to_string(n % 2);
            n /= 2;
        }
        reverse(res.begin(), res.end());
        for (int i = 0; i < res.length(); i++) {
            if (res[i] == '1') {
                result += '0';
            } else {
                result += '1';
            }
        }
        int value = 0;
        for (char c : result) {
            value = value * 2 + c - '0';
        }
        return value;
    }
};