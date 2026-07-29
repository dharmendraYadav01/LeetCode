class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int min_sum = INT_MAX;
        for (int i = 1; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                min_sum = min(min_sum, nums[0] + nums[i] + nums[j]);
            }
        }
        return min_sum;
    }
};