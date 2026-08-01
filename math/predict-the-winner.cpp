class Solution {
public:
    int dp[23][23];
    int solve(vector<int>& nums, int i, int j) {
        if (i > j)
            return 0;
        if (i == j)
            return nums[i];
        if (dp[i][j] != -1)
            return dp[i][j];
        int left =
            nums[i] + min(solve(nums, i + 2, j), solve(nums, i + 1, j - 1));
        int right =
            nums[j] + min(solve(nums, i + 1, j - 1), solve(nums, i, j - 2));
        return dp[i][j] = max(left, right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        int total = accumulate(nums.begin(), nums.end(), 0);
        int p1 = solve(nums, 0, n - 1);
        int p2 = total - p1;
        if (p1 >= p2)
            return true;
        return false;
    }
};