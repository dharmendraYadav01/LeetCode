class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        vector<int> result;
        while (i < n) {
            int idx = ((i + nums[i]) % n + n) % n;
            result.push_back(nums[idx]);
            i++;
        }
        return result;
    }
};