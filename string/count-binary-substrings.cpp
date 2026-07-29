class Solution {
public:
    int countBinarySubstrings(string s) {
        int i = 0;
        int j = s.length();
        vector<int> grp;
        while (i < j) {
            int pr = 1;
            while (i + 1 < j && s[i + 1] == s[i]) {
                pr++;
                i++;
            }
            grp.push_back(pr);
            i++;
        }
        int sum = 0;
        for (int i = 0; i < grp.size() - 1; i++) {
            sum += min(grp[i], grp[i + 1]);
        }
        return sum;
    }
};