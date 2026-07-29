class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
        for (char& c : s) {
            freq[c - 'a']++;
        }
        string left = "";
        string mid = "";
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0 && mid == "") {
                mid += (char)(i + 'a');
            }
            left += string(freq[i] / 2, (char)(i + 'a'));
            // string(ketne length ka char chahiye,konsa char chahiye)
        }
        string right = left;
        reverse(right.begin(), right.end());
        return left + mid + right;
    }
};