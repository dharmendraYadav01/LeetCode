class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<vector<int>> res;
        unordered_map<int, int> mp;
        for (int i = 0; i + k <= nums.size(); i++) {
            vector<int> temp;
            for (int j = i; j < i + k && j < nums.size(); j++) {
                temp.push_back(nums[j]);
                mp[nums[j]]++;
            }
            res.push_back(temp);
        }
        int ans = -1;
        for (auto it : res) {
            for (int i = 0; i < it.size(); i++) {
                if (mp[it[i]] == 1) {
                    ans = max(ans, it[i]);
                }
            }
        }
        return ans;
    }
};