class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> suff(n);
        suff[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = min(nums[i], suff[i + 1]);
        }
        long long ans = LLONG_MIN;
        long long pref = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            pref += nums[i];
            ans = max(ans, pref - suff[i + 1]);
        }
        return ans;
    }
};