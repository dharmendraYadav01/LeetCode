class Solution {
public:
    int Count(string let) {
        int count = 0;
        for (char c : let) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                count++;
        }
        return count;
    }
    string reverseWords(string s) {
        int i = 0;
        string ans = "";
        string target = "";
        while (i<s.length() && s[i] != ' ') {
            target += s[i];
            i++;
        }
        i++;
        int idx = i;
        int countVowel = Count(target);
        while (i < s.length()) {
            string res = "";
            while (idx < s.length() && s[idx] != ' ') {
                res += s[idx];
                idx++;
            }
            if (countVowel == Count(res)) {
                reverse(res.begin(), res.end());
                ans += res;
                ans += ' ';
            } else {
                ans += res;
                ans += ' ';
            }
            idx++;
            i = idx;
        }
        ans = target + ' ' + ans;
        ans.resize(ans.size() - 1);
        return ans;
    }
};