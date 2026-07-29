class Solution {
public:
    int maxcost(vector<int>& nums, vector<int>& memo, int idx) {
        if (idx >= nums.size())
            return 0;
        if (memo[idx] != -1)
            return memo[idx];
        int take = nums[idx] + maxcost(nums, memo, idx + 2);
        int nottake = maxcost(nums, memo, idx + 1);
        return memo[idx] = max(take, nottake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        // for idx=0----> idx=last-1;
        vector<int> nums1(nums.begin(), nums.end() - 1);
        vector<int> memo1(n, -1);
        int ans1 = maxcost(nums1, memo1, 0);
        // for idx=1----> idx=last;
        vector<int> nums2(nums.begin() + 1, nums.end());
        vector<int> memo2(n, -1);
        int ans2 = maxcost(nums2, memo2, 0);
        return max(ans1, ans2);
    }
};