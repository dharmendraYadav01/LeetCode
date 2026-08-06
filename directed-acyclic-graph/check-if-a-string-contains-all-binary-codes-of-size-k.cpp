class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int target = (1 << k);
        unordered_set<string> st;
        for (int i = k; i <= s.length(); i++) {
            string sub = s.substr(i - k, k);
            st.insert(sub);
            if (st.size() == target)
                return true;
        }
        return false;
    }
};