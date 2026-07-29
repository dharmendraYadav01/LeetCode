class Solution {
public:
    int distinct(string &s) {
        unordered_set<char> st;
        for (auto c : s) {
            st.insert(c);
        }
        return st.size();
    }
    int residuePrefixes(string s) {
        string temp = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            temp += s[i];
            int n = distinct(temp);
            if (n == (temp.length()) % 3)
                count++;
        }
        return count;
    }
};