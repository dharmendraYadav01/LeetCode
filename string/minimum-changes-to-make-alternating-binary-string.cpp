class Solution {
public:
    int minOperations(string s) {
        string b_z = "0";
        string b_o = "1";
        for (int i = 1; i < s.length(); i++) {
            if (b_z[i - 1] == '0')
                b_z += '1';
            else
                b_z += '0';
        }
        for (int i = 1; i < s.length(); i++) {
            if (b_o[i - 1] == '1')
                b_o += '0';
            else
                b_o += '1';
        }
        int cnt_o = 0;
        int cnt_z = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != b_z[i])
                cnt_z++;
            if (s[i] != b_o[i])
                cnt_o++;
        }
        return min(cnt_o, cnt_z);
    }
};
// 101010101
