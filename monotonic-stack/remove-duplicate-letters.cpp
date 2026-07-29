class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        vector<bool> take(26, false);
        vector<int> idx(26, 0);
        for (int i = 0; i < s.length(); i++) {
            idx[s[i] - 'a'] = i;
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (!take[s[i] - 'a']) {
                while (!ans.empty() && ans.back() > s[i] &&
                       idx[ans.back() - 'a'] > i) {
                    take[ans.back() - 'a'] = false;
                    ans.pop_back();
                }
                ans += s[i];
                take[s[i] - 'a'] = true;
            }
        }
        return ans;
    }
};