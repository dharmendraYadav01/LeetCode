class Solution {
public:
    // int find_maxi(int s, int e, vector<int>& nums) {
    //     int maxi = INT_MIN;
    //     for (int i = s; i <= e; i++) {
    //         maxi = max(maxi, nums[i]);
    //     }
    //     return maxi == INT_MAX ? -1 : maxi;
    // }
    // int find_mini(int s, int e, vector<int>& nums) {
    //     int mini = INT_MAX;
    //     for (int i = s; i <= e; i++) {
    //         mini = min(mini, nums[i]);
    //     }
    //     return mini == INT_MIN ? -1 : mini;
    // }
    int firstStableIndex(vector<int>& nums, int k) {
        // 1. Brute force
        int n = nums.size();
        // vector<int> temp(n, -1);
        // for (int i = 0; i < n; i++) {
        //     int maxi = find_maxi(0, i, nums);
        //     int mini = find_mini(i, n - 1, nums);
        //     temp[i] = maxi - mini;
        // }
        // for (int i = 0; i < n; i++) {
        //     if (temp[i] <= k)
        //         return i;
        // }
        // return -1;
        // 2. optimize Approach
        vector<int> maxx(n), minn(n);
        maxx[0] = nums[0];
        minn[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) {
            maxx[i] = max(maxx[i - 1], nums[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            minn[i] = min(minn[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++) {
            if (maxx[i] - minn[i] <= k)
                return i;
        }
        return -1;
    }
};