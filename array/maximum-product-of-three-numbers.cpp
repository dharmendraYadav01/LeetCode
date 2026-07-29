class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // int nev = 0, pos = 0;
        // for (int i : nums) {
        //     if (i < 0) {
        //         nev++;
        //     } else {
        //         pos++;
        //     }
        // }
        // if (nev == nums.size())
        //     return nums[n - 1] * nums[n - 2] * nums[n - 3];
        int cnt = 0;
        int ans = 0;
        // if (pos >= 3) {
            cnt = nums[n - 1] * nums[n - 2] * nums[n - 3];
        // }
        // if (nev >= 2) {
            ans = nums[0] * nums[1] * nums[nums.size() - 1];
        // }
        return cnt > ans ? cnt : ans;
    }
};