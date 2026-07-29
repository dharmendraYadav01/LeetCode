class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> visited;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] <= k) {
                visited.insert(nums[i]);
            }
            if (visited.size() == k)
                return nums.size() - i;
        }
        return 0;
    }
};