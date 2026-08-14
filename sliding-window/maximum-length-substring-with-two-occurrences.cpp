class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> freq;
        int i = 0;
        int j = i;
        int ans = INT_MIN;
        while (i <= j && j < n) {
            freq[s[j]]++;
            while (i < j && freq[s[j]] > 2) {
                freq[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};