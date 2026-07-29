class Solution {
public:
    int solve(string& s, vector<vector<int>>&dp, int l, int r) {
        if (l > r)
            return 0;
        if (l == r)
            return 1;
        if (dp[l][r] != -1)
            return dp[l][r];
        if (s[l] == s[r]) {
            return dp[l][r] = 2 + solve(s, dp, l + 1, r - 1);
        }
        return dp[l][r] = max(solve(s, dp, l + 1, r), solve(s, dp, l, r - 1));
    }
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(s, dp, 0, n - 1);
    }
};