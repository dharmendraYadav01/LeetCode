class Solution {
public:
    void FindPfx(int i, unordered_set<string>& st) {
        string s = to_string(i);
        string cnt = "";
        for (int k = 0; k < s.length(); k++) {
            cnt += s[k];
            st.insert((cnt));
        }
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> st;
        for (int it : arr2) {
            FindPfx(it, st);
        }
        int max_b = 0;
        for (int i = 0; i < arr1.size(); i++) {
            unordered_set<string> st1;
            FindPfx(arr1[i], st1);
            for (auto it : st1) {
                if (st.find(it) != st.end()) {
                    int size = it.length();
                    max_b = max(max_b, size);
                }
            }
        }
        return max_b;
    }
};