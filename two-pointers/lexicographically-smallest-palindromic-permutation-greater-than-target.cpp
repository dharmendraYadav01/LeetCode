class Solution {
public:
    string ans = "";
    bool isPalin(string curr) {
        int i = 0;
        int j = curr.length() - 1;
        while (i < j) {
            if (curr[i] != curr[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool Solve(vector<int>& freq, int idx, string curr, string target,
               bool greater) {
        if (idx == target.length()) {
            if (greater && isPalin(curr)) {
                ans = curr;
                return true;
            }
            return false;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            if (freq[c - 'a'] == 0)
                continue;
            if (!greater && c < target[idx])
                continue;
            curr.push_back(c);
            freq[c - 'a']--;
            bool isvalid = greater || c > target[idx];
            if (Solve(freq, idx + 1, curr, target, isvalid))
                return true;
            curr.pop_back();
            freq[c - 'a']++;
        }
        return false;
    }
    string lexPalindromicPermutation(string s, string target) {
        vector<int> freq(26, 0);
        for (char& c : s) {
            freq[c - 'a']++;
        }
        Solve(freq, 0, "", target, false);
        return ans;
    }
};