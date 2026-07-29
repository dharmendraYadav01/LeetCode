class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long max_val = nums[nums.size() - 1];
        long long min_val = nums[0];
        return (max_val - min_val) * k;
    }
};