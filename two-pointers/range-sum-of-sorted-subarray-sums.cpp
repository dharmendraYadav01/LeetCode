class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int mod=1e9+7;
        vector<int> sub;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                sub.push_back(sum);
            }
        }
        int ans = 0;
        sort(sub.begin(), sub.end());
        for (int i = left; i < right + 1; i++) {
            ans = (ans+sub[i - 1])%mod;
        }
        return ans;
    }
};