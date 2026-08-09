class Solution {
public:
    int dp[101][101][2];
    int AliceScore(vector<int>& piles, int idx, int M, int turn) {
        int n = piles.size();
        if (idx >= n)
            return 0;
        if (dp[idx][M][turn] != -1)
            return dp[idx][M][turn];
        int stones = 0;
        int result = (turn == 1) ? INT_MIN : INT_MAX;
        for (int x = 1; x <= min(2 * M, n - idx); x++) {
            stones += piles[idx + x - 1];
            if (turn == 1) { // Alice turn and choose best for itself
                result = max(result, stones + AliceScore(piles, idx + x, max(M, x), 0));
            } else { // Bob turn and give worst or minimum stones to alice
                result = min(result, AliceScore(piles, idx + x, max(M, x), 1));
            }
        }
        return dp[idx][M][turn] = result;
    }
    int stoneGameII(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        return AliceScore(piles, 0, 1, 1);
    }
};