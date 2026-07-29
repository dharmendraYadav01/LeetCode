class Solution {
public:
    int appendCharacters(string s, string t) {
        int count = 0;
        int i = 0;
        int j = 0;
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else
                i++;
        }
        while (j < t.length()) {
            count++;
            j++;
        }
        return count;
    }
};