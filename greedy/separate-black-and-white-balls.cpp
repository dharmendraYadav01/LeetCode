class Solution {
public:
    long long minimumSteps(string s) {
        long long min_step = 0;
        int temp = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                min_step += temp;
            } else {
                temp++;
            }
        }
        return min_step;
    }
};