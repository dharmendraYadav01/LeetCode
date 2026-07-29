class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '[')
                st.push(c);
            else {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                }
            }
        }
        return (st.size() + 1) / 2;
    }
};