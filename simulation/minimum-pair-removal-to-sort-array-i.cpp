class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while (!is_sorted(nums.begin(), nums.end())) {
            int idx = 0;
            int min_sum = INT_MAX;
            for (int i = 0; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (min_sum > sum) {
                    min_sum = sum;
                    idx = i;
                }
            }
            nums[idx] += nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            count++;
        }
        return count;
    }
};