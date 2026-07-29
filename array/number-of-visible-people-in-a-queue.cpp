class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[i] > heights[st.top()]) {
                ans[st.top()]++;
                st.pop();
            }
            if (!st.empty()) {
                ans[st.top()]++;
            }
            st.push(i);
        }
        return ans;
    }
};