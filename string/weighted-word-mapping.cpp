class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<int, char> mp;
        char c = 'z';
        for (int i = 0; i < 26; i++) {
            mp[i] = c;
            c--;
        }
        vector<int> fl;
        for (auto c : words) {
            int sum = 0;
            for (int i = 0; i < c.length(); i++) {
                sum += weights[c[i] - 'a'];
            }
            fl.push_back(sum);
        }
        string ans = "";
        for (int it : fl) {
            ans += mp[it % 26];
        }
        return ans;
    }
};