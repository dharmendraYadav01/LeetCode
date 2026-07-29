class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        string b_z = "0";
        string b_o = "1";
        for (int i = 1; i < 2 * n; i++) {
            if (b_z[i - 1] == '0')
                b_z += '1';
            else
                b_z += '0';
        }
        for (int i = 1; i < 2 * n; i++) {
            if (b_o[i - 1] == '1')
                b_o += '0';
            else
                b_o += '1';
        }
        s += s;
        int cnt_o = 0;
        int cnt_z = 0;
        int result = INT_MAX;
        int i = 0;
        int j = 0;
        while (j < 2 * n) {
            if (s[j] != b_z[j]) {
                cnt_z++;
            }
            if (s[j] != b_o[j]) {
                cnt_o++;
            }
            if (j - i + 1 > n) { //sliding window
                if (s[i] != b_o[i])
                    cnt_o--;
                if (s[i] != b_z[i])
                    cnt_z--;
                i++;
            }
            if (j - i + 1 == n) {
                result = min({result, cnt_o, cnt_z});
            }
            j++;
        }
        return result;
    }
};