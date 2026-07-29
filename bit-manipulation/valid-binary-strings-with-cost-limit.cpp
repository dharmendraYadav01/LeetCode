class Solution {
public:
    bool isvalisCost(string s, int k) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                sum += i;
            }
        }
        return sum <= k ? true : false;
    }
    bool isvalidOne(string s) {
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '1' && s[i + 1] == '1')
                return false;
        }
        return true;
    }
    void solve(int n, int k, string s, vector<string>& ans) {
        if (s.length() == n) {
            ans.push_back(s);
            return;
        }
        s += "0";
        if (isvalidOne(s) && isvalisCost(s, k)) {
            solve(n, k, s, ans);
        }
        s.pop_back();
        s += "1";
        if (isvalidOne(s) && isvalisCost(s, k)) {
            solve(n, k, s, ans);
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        string s = "";
        vector<string> ans;
        solve(n, k, s, ans);
        return ans;
    }
};