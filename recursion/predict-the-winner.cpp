class Solution {
public:
    int dp[23][23];
    int solve(vector<int>& nums, int i, int j) {
        if (i == j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int left = nums[i] - solve(nums, i + 1, j);
        int right = nums[j] - solve(nums, i, j - 1);
        return dp[i][j] = max(left, right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0, n - 1) >= 0;
    }
};