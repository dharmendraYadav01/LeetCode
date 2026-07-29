class Solution {
public:
    string largestEven(string s) {
        int idx = -1;
        string res = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            int dig = s[i] - '0';
            if (dig % 2 == 0) {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            return "";
        return s.substr(0, idx + 1);
    }
};