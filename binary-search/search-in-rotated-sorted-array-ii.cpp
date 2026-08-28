class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // isGood
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) { // if found
                return true;
            }
        }
        return false;
    }
};