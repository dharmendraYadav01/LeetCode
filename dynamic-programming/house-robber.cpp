class Solution {
public:
    int maxCost(vector<int>& nums, vector<int>& memo, int idx) {
        if (idx >= nums.size())
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        int take = nums[idx] + maxCost(nums, memo, idx + 2);
        int nottake = maxCost(nums, memo, idx + 1);
        return memo[idx] = max(take, nottake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> memo(n, -1);
        return maxCost(nums, memo, 0);
    }
};