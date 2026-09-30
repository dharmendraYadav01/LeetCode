class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (auto it : knowledge) {
            mp[it[0]] = it[1];
        }
        string res;
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '(') {
                string key = "";
                i++;
                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }
                if (mp.find(key) != mp.end()) {
                    res += mp[key];
                } else {
                    res += '?';
                }
            } else {
                res += s[i];
            }
            i++;
        }
        return res;
    }
};
// temp=(name)