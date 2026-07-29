class Solution {
public:
    string countAndSay(int n) {
        // Basecase
        if (n == 1)
            return "1";
        string s = "1";
        for (int i = 2; i <= n; i++) {
            string t = "";
            int count = 1;
            for (int j = 1; j < s.length(); j++) {
                if (s[j] == s[j - 1])
                    count++;
                else {
                    t += to_string(count) + s[j - 1];
                    count = 1;
                }
            }
            t += to_string(count) + s[s.length() - 1];
            s = t;
        }
        return s;
    }
};