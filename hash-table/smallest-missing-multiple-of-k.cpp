class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        int i = 1;
        int n = nums.size();
        while (i <= n * k) {
            if (i % k == 0 && !st.count(i)) {
                return i;
            }
            i++;
        }
        return -1;
    }
};