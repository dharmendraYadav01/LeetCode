class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                if ((s[i] - 'a') > (s[j] - 'a')) {
                    s[i] = s[j];
                } else {
                    s[j] = s[i];
                }
            }
            i++;
            j--;
        }
        return s;
    }
};