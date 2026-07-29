class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<double> st;
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            st.insert((nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }
        return st.size();
    }
};
// 0 2 5 7 7 7 8 8 9 9