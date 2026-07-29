class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for (auto &it : mp) {
            auto &v = it.second;
            if (v.size() >= 3) {
                for (int i = 0; i + 2 < v.size(); i++) {
                    int sum = 2 * (v[i + 2] - v[i]);
                    ans = min(ans, sum);
                }
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};