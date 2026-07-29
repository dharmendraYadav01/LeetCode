class Solution {
public:
    int findGCD(vector<int>& nums) {

        // app-1:
        int sml = *min_element(nums.begin(), nums.end());
        int lrg = *max_element(nums.begin(), nums.end());
        return gcd(sml, lrg);
        // app-2:
        // int sml = INT_MAX;
        // int lrg = INT_MIN;
        // for (int num : nums) {
        //     sml = min(sml, num);
        //     lrg = max(lrg, num);
        // }
        // int ans = INT_MIN;
        // for (int i = 1; i <= sml; i++) {
        //     if (sml % i == 0 && lrg % i == 0) {
        //         ans = max(ans, i);
        //     }
        // }
        // return ans;
    }
};