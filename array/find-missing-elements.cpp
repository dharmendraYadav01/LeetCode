class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        vector<int> ans;
        for (int i = mini; i <= mx; i++) {
            if (st.count(i) == 0)
                ans.push_back(i);
        }
        return ans;
    }
};