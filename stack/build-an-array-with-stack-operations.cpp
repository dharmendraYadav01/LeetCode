class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        sort(target.begin(), target.end());
        int last = target[target.size() - 1];
        stack<int> st;
        for (int i = 1; i <= n && i <= last; i++) {
            st.push(i);
            ans.push_back("Push");
            if (find(target.begin(), target.end(), st.top()) == target.end()) {
                st.pop();
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};