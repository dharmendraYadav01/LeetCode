class Solution {
public:
    int findDiff(string d, string b) {
        int cnt = 0;
        for (int i = 0; i < d.length(); i++) {
            if (d[i] != b[i])
                cnt++;
        }
        return cnt;
    }
    vector<string> twoEditWords(vector<string>& queries,vector<string>& dictionary) {
        vector<string> ans;
        for (int i = 0; i < queries.size(); i++) {
            for (int j = 0; j < dictionary.size(); j++) {
                int diff = findDiff(queries[i], dictionary[j]);
                if (diff <= 2) {
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }
        return ans;
    }
};