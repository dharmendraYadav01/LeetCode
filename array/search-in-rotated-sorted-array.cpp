class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            // for left half sorted array
            if (nums[left] <= nums[mid]) {
                if (target >= nums[left] && nums[mid] > target) { // nums[left]≤target<nums[mid]
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // for right half sorted array
            if (nums[right] >= nums[mid]) {
                if (target <= nums[right] && nums[mid] < target) { // nums[mid]<target≤nums[right]
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};