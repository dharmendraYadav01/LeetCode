class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        vector<bool> wrong(s.size(), false);
        int i = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            if (s[i] == ')') {
                if (st.empty()) {
                    wrong[i] = true;
                } else {
                    st.pop();
                }
            }
        }
        while (!st.empty()) {
            wrong[st.top()] = true;
            st.pop();
        }
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (!wrong[i])
                ans += s[i];
        }
        return ans;
    }
};
