class Solution {
public:
    void reverse(string &s) {
        // string res = s;
        std::reverse(s.begin(),s.end());
        // for (int i = s.length() - 1; i >= 0; i--) {
        //     res += s[i];
        // }
        // s = res;
    }
    string processStr(string s) {
        stack<char> st;
        for (char c : s) {
            if (c != '*' && c != '#' && c != '%') {
                st.push(c);
            }
            if (c == '*') {
                if (!st.empty()) {
                    st.pop();
                }
            }
            if (c == '#') {
                string temp="";
                while(!st.empty()){
                    temp+=st.top();
                    st.pop();
                }
                reverse(temp);
                for(char c:temp){
                    st.push(c);
                    
                }
                for(char c:temp){
                    st.push(c);
                    
                }
                // if (!st.empty())
                //     st.push(st.top());
            }
            if (c == '%') {
                string temp="";
                while (!st.empty()) {
                    temp += st.top();
                    st.pop();
                }
                reverse(temp);
                for (int i = temp.length() - 1; i >= 0; i--) {
                    st.push(temp[i]);
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans);
        return ans;
    }
};