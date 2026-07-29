class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        for (int i = 0; i < word.length();) {
            int j = i;
            int count = 0;
            while (j < word.length() && word[i] == word[j]) {
                count++;
                j++;
                if (count == 9)
                    break;
            }
            ans += to_string(count);
            ans += word[i];
            i = j;
        }
        return ans;
    }
};