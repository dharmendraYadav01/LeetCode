class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int cnt = 0;
        while (i < j) {
            if (nums[i] != 0)
                i++;
            if (nums[j] == 0)
                j--;
            if (i < j && nums[i] == 0 && nums[j] != 0) {
                cnt++;
                i++;
                j--;
            }
        }
        return cnt;
    }
};