class Solution {
public:
    int minMoves(vector<int>& nums) {
    // time complexity-> O(nlogn)
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int gap = 0;
        // for (int i = n - 1; i >= 0; i--) {
        //     gap += nums[i] - nums[0];
        // }
        // return gap;
    // time complexity-> O(n)
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int mini = *min_element(nums.begin(), nums.end());
        return sum - (n * mini);
    }
};