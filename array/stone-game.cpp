class Solution {
public:
    int dp[503][503];
    int solve(vector<int>& piles, int i, int j) {
        if (i > j)
            return 0;
        if (i == j)
            return piles[i];
        if (dp[i][j] != -1)
            return dp[i][j];
        int left =
            piles[i] + min(solve(piles, i + 2, j), solve(piles, i + 1, j - 1));
        int right =
            piles[j] + min(solve(piles, i + 1, j - 1), solve(piles, i, j - 2));
        return dp[i][j] = max(left, right);
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        memset(dp, -1, sizeof(dp));
        int total = accumulate(piles.begin(), piles.end(), 0);
        int p1 = solve(piles, 0, n - 1);
        int p2 = total - p1;
        return p1 > p2;
    }
};