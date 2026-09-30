class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n = nums.size();
        int m = mul.size();
        vector<vector<long long>> dp(m + 1, vector<long long>(m + 1, 0));

        for (int op = m - 1; op >= 0; op--) {
            for (int left = op; left >= 0; left--) {
                int right = n - 1 - (op - left);
                long long l = (mul[op] * nums[left] * 1LL) + dp[left + 1][op + 1];
                long long r = (mul[op] * nums[right] * 1LL) + dp[left][op + 1];
                dp[left][op] = max(l, r);
            }
        }

        return (int)dp[0][0];
    }
};