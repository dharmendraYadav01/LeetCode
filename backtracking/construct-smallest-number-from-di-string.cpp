class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        string ans = "";
        for (int i = 1; i <= n + 1; i++) {
            ans += to_string(i);
        }
        int i = 0;
        int j = 0;
        while (i < pattern.size() && j < ans.length() - 1) {
            if (pattern[i] == 'I' && ans[j] < ans[j + 1]) {
                i++;
                j++;
            } else if (pattern[i] == 'D' && ans[j] > ans[j + 1]) {
                i++;
                j++;
            } else {
                next_permutation(ans.begin(), ans.end());
                i = 0;
                j = 0;
            }
        }
        return ans;
    }
};