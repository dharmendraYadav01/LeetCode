class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]] = i;
        }
        vector<int> ans;
        int i = 0;
        while (i < s.length()) {
            int end = mp[s[i]];
            int j = i;
            while (j < end) {
                if (mp[s[j]] > end) {
                    end = mp[s[j]];
                } else
                    j++;
            }
            ans.push_back(j - i + 1);
            i = j + 1;
        }
        return ans;
    }
};