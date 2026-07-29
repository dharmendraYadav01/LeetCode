class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, int> mp;
        for (int i = 0; i < word.length(); i++) {
            if(isupper(word[i])){
                if(mp.count(word[i])) continue;
            }
            mp[word[i]] = i;
        }
        int cnt = 0;
        for (auto it : mp) {
            if (islower(it.first)) {
                if (mp.count(toupper(it.first))) {
                    int n = mp[toupper(it.first)];
                    if (n > it.second)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};