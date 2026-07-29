class Solution {
public:
    vector<int> memo;
    int solve(vector<int>& nums, int idx) {
        int n = nums.size();
        int cnt = 1e9;
        if (idx == n - 1)
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        for (int i = idx + 1; i <= min(idx + nums[idx], n - 1); i++) {
            cnt = min(cnt, 1 + solve(nums, i));
        }
        return memo[idx] = cnt;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        memo.resize(n + 1, -1);
        return solve(nums, 0);
    }
};