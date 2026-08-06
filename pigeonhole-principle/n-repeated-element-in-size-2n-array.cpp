class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto m : mp) {
            if (m.second == nums.size() / 2)
                return m.first;
        }
        return -1;
    }
};