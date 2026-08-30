class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        int maxi_idx = 0;
        int mini_idx = 0;
        int n = nums.size();
        for (int i = 1; i < nums.size(); i++) {
            if (mini > nums[i]) {
                mini = nums[i];
                mini_idx = i; // 5
            }
        }
        for (int i = 1; i < nums.size(); i++) {
            if (maxi < nums[i]) {
                maxi = nums[i];
                maxi_idx = i; // 1
            }
        }
        int left = max(maxi_idx, mini_idx) + 1;  // 6
        int right = n - min(maxi_idx, mini_idx); // 7
        int both = (min(maxi_idx, mini_idx) + 1) + (n - max(maxi_idx, mini_idx)); // 2+3
        return min({left, right, both});
    }
};