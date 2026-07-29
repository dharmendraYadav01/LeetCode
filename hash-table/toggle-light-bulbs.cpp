class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int, int> mp;
        for (int it : bulbs) {
            mp[it] = 0;
        }
        for (int i = 0; i < bulbs.size(); i++) {
            if (mp[bulbs[i]] == 0) {
                mp[bulbs[i]] = 1;
            } else {
                mp[bulbs[i]] = 0;
            }
        }
        vector<int> ans;
        for (auto it : mp) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};