class Solution {
public:
    bool isValid(int idx, string &s) {
        string res = "";
        for (int i = 0; i < s.length(); i++) {
            if (i != idx) res += s[i];  
        }

        string rev = res;
        reverse(rev.begin(), rev.end());
        return rev == res;
    }

    bool validPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {
            if (s[l] != s[r]) {
                return isValid(l, s) || isValid(r, s);
            }
            l++;
            r--;
        }

        return true;
    }
};
