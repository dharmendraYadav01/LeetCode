class Solution {
public:
    string reverseByType(string s) {
        vector<char> s1;
        vector<char> s2;
        for (auto c : s) {
            if (c >= 'a' && c <= 'z') {
                s1.push_back(c);
            } else {
                s2.push_back(c);
            }
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string ans = "";
        int i = 0;
        int j = 0;
        for (auto c : s) {
            if (c >= 'a' && c <= 'z') {
                ans += s1[i];
                i++;
            } else {
                ans += s2[j];
                j++;
            }
        }
        return ans;
    }
};