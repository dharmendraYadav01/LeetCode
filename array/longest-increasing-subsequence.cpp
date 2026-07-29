class Solution {
public:
    int solve(int idx, int prev, vector<int>& nums, vector<vector<int>>& memo) {
        if (idx == nums.size())
            return 0;
        if (memo[idx][prev + 1] != -1)
            return memo[idx][prev + 1];
        int nottake = solve(idx + 1, prev, nums, memo);
        int take = 0;
        if (prev == -1 || nums[idx] > nums[prev]) {
            take = (1 + solve(idx + 1, idx, nums, memo));
        }
        return memo[idx][prev + 1] = max(take, nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> memo(n, vector<int>(n + 1, -1));
        return solve(0, -1, nums, memo);
    }
};