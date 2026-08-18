class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = -1;
        for (int i = 0; i + k <= nums.size(); i++) {
            unordered_set<int> seen;
            for (int j = i; j < i + k; j++) {
                seen.insert(nums[j]);
            }
            for (int s : seen) {
                mp[s]++;
            }
        }
        for (auto m : mp) {
            if (m.second == 1) {
                ans = max(ans, m.first);
            }
        }

        return ans;
    }
};