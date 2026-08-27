class Solution {
public:
    string ans = "";
    bool Solve(vector<int>& freq, string curr, string& target, int idx, bool greater) {
        if (idx == target.length()) {
            if (greater) {
                ans = curr;
                return true;
            }
            return false;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            // base case
            if (freq[c - 'a'] == 0)
                continue;
            if (!greater && c < target[idx])
                continue;
            // do
            curr.push_back(c);
            freq[c - 'a']--;
            bool isvalid = greater || c > target[idx];
            if (Solve(freq, curr, target, idx + 1, isvalid))
                return true;
            //backtracking
            curr.pop_back();
            freq[c - 'a']++;
        }
        return false;
    }
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26, 0);
        for (char& c : s) {
            freq[c - 'a']++;
        }
        Solve(freq, "", target, 0, false);
        return ans;
    }
};