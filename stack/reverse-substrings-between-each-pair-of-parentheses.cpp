class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        int i = 0;
        while (i < s.length()) {
            st.push(s[i]);
            if (!st.empty() && st.top() == ')') {
                st.pop();
                string res;
                while (!st.empty() && st.top() != '(') {
                    res += st.top();
                    st.pop();
                }
                st.pop();
                for (char c : res) {
                    st.push(c);
                }
            }
            i++;
        }
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};