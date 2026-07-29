class Solution {
public:
    vector<int> memo;
    bool solve(vector<int>& nums, int idx) {
        int n = nums.size();
        if (memo[idx] != -1)
            return memo[idx];
        if (idx == n - 1)
            return true;
        for (int i = idx + 1; i <= min(idx + nums[idx], n - 1); i++) {
            if (solve(nums, i)) {
                return memo[idx] = true;
            }
        }
        return memo[idx] = false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        memo.resize(n + 1, -1);
        return solve(nums, 0);
    }
};