class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        for (int i = k;; i += k) {
            if (!st.count(i))
                return i;
        }
        // int i = 1;
        // int n = nums.size();
        // while (true) {
        //     if (i % k == 0 && !st.count(i)) {
        //         return i;
        //     }
        //     i++;
        // }
        return -1;
    }
};