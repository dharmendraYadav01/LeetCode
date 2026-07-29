class Solution {
public:
    bool Check(vector<int> nums, int count, int idx, int dir) {
        vector<int> temp = nums;
        while (idx >= 0 && idx < nums.size() && count > 0) {
            if (temp[idx] > 0) {
                temp[idx]--;
                dir *= -1;
                if (temp[idx] == 0) {
                    count--;
                }
            }
            idx += dir;
        }
        return count == 0;
    }
    int countValidSelections(vector<int>& nums) {
        int result = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                count++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (Check(nums, count, i, -1)) {
                    result++;
                }
                if (Check(nums, count, i, 1)) {
                    result++;
                }
            }
        }
        return result;
    }
};