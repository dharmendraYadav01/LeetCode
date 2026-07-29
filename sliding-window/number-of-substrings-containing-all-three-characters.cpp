class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        int n = s.length();
        map<char, int> mp;
        int i = 0, j = 0;
        while (i < s.length() && j < s.length()) {
            mp[s[j]]++;
            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                cnt += n - j;
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return cnt;
    }
};