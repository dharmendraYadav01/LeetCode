class Solution {
public:
    bool halvesAreAlike(string s) {
        int countA = 0;
        int countB = 0;
        int n = s.length() / 2;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'I' || s[i] == 'U' ||
                s[i] == 'E' || s[i] == 'O') {
                countA++;
            }
        }
        for (int i = n; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'I' || s[i] == 'U' ||
                s[i] == 'E' || s[i] == 'O') {
                countB++;
            }
        }
        return countA == countB;
    }
};