class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // approach 1-->brute force

        // for (int i : nums) {
        //     if (i < k)
        //         return -1;
        // }
        // set<int> st(nums.begin(), nums.end());
        // vector<int> dup;
        // for (int it : st) {
        //     dup.push_back(it);
        // }
        // sort(dup.begin(), dup.end());
        // int cnt = 0;
        // for (int i = dup.size() - 2; i >= 0; i--) {
        //     st.clear();
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (nums[j] > dup[i]) {
        //             st.insert(nums[j]);
        //         }
        //     }
        //     if (st.size() == 1) {
        //         for (int j = 0; j < nums.size(); j++) {
        //             if (nums[j] > dup[i]) {
        //                 nums[j] = dup[i];
        //             }
        //         }
        //         cnt++;
        //     }
        // }
        // st.clear();
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] > k) {
        //         st.insert(nums[i]);
        //     }
        // }
        // if (st.size() == 1) {
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (nums[j] > k) {
        //             nums[j] = k;
        //         }
        //     }
        //     cnt++;
        // }
        // st.clear();
        // for (int i = 0; i < nums.size(); i++) {
        //     st.insert(nums[i]);
        // }
        // return st.size() == 1 && *st.begin() == k ? cnt : -1;

        // approach 2 -->hmmm ye bhi brute force hai bs yhi aati hai
        set<int> st;
        for (int it : nums) {
            if (it < k)
                return -1;
            if (it > k)
                st.insert(it);
        }
        return st.size();
    }
};