class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0;
        int j = i;
        int n = nums.size();
        unordered_map<int, int> freq;
        int result = INT_MIN;
        while (i < n && j < n) {
            // freq[nums[j]]<=k || !freq.count(nums[j])){
            freq[nums[j]]++;
            j++;

            while (freq[nums[i]] > k) {
                freq[nums[i]]--;
                i++;
                result = max(result, j - i + 1);
            }
            result = max(result, j - i + 1);
        }
        return result - 1;
    }
};