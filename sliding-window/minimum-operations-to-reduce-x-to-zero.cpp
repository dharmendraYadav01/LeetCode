class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int, int> mp;
        mp[0] = -1; // for edge case if we found currSum-x==0
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            mp[sum] = i;
        }
        if (sum < x)
            return -1;
        int target = sum - x; // find maximum size subarray that has sum==totalSum-x
        int curr = 0;
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i];
            int res = curr - target;
            if (mp.count(res) == 0) {
                continue;
            } else {
                int idx = mp[res];
                ans = max(ans, mp[curr] - idx);
            }
        }
        return ans == INT_MIN ? -1 : nums.size() - ans;
    }
};