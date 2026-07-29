class Solution {
public:
    int find(int idx, vector<int> target) {
        int ans = INT_MAX;
        for (int i = 0; i < target.size(); i++) {
            int temp = abs(idx - target[i]);
            if (temp < ans) {
                ans = temp;
            }
        }
        return ans;
    }
    vector<int> shortestToChar(string s, char c) {
        vector<int> idx_c;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c)
                idx_c.push_back(i);
        }
        vector<int> ans;
        for (int i = 0; i < s.length(); i++) {
            int min_idx = find(i, idx_c);
            ans.push_back(min_idx);
        }
        return ans;
    }
};