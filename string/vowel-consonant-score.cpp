class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, co = 0;
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                v++;
            } else if (c >= 'a' && c <= 'z') {
                co++;
            }
        }
        return co == 0 ? 0 : floor(v / co);
    }
};