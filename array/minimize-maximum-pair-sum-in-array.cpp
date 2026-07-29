class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size() - 1;
        int ans = INT_MIN;
        int i = 0;
        int j = n;
        sort(nums.begin(), nums.end());
        while (i <= (n / 2) && j > (n / 2)) {
            int sum = nums[i] + nums[j];
            ans = max(ans, sum);
            i++;
            j--;
        }

        return ans;
    }
};