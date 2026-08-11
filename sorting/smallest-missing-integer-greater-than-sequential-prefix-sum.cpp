class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                result.push_back(nums[i]);
            } else
                break;
        }
        int sum = accumulate(result.begin(), result.end(), 0);
        while (true) {
            if (find(nums.begin(), nums.end(), sum) == nums.end()) {
                return sum;
            }
            sum++;
        }
        return 0;
    }
};