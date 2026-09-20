class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char, int> mp;
        int i = 1;
        for (char c = 'z'; c >= 'a'; c--) {
            mp[c] = i;
            i++;
        }
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += mp[s[i]] * (i + 1);
        }
        return sum;
    }
};