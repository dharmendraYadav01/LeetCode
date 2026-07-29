class Solution {
public:
    bool checkZeroOnes(string s) {
        int max_o = 0,max_z = 0;
        int cnt_o = 0,cnt_z = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                cnt_o++;
                cnt_z=0;
            } else {
                cnt_z++;
                cnt_o=0;
            }
            max_o=max(max_o,cnt_o);
            max_z=max(max_z,cnt_z);
        }
        return max_o > max_z ? true : false;
    }
};
// 0111010011
// 111000