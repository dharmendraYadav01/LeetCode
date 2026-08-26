class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int ans = INT_MAX;
        string res = "";
        for (int i = 0; i < s.length(); i++) {
            int cnt = 0;
            string temp = "";
            for (int j = i; j < s.length(); j++) {
                if (s[j] == '1') {
                    cnt++;
                }
                temp += s[j];
                if (cnt == k)
                    break;
            }
            if (cnt == k) {
                res = temp;
                ans = cnt;
            }
        }
        return res;
    }
};