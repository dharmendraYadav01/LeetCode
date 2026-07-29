class Solution {
public:
    void backtrack(int n, vector<string>& result, string s, vector<char>& ch) {
        if (s.size() == n) {
            result.push_back(s);
            return;
        }
        for (auto c : ch) {
            if (s.empty() || s.back() != c) {
                s.push_back(c);
                backtrack(n, result, s, ch);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<char> s = {'a', 'b', 'c'};
        vector<string> result;
        string fn = "";
        backtrack(n, result, fn, s);
        if (result.size() < k)
            return "";
        return result[k - 1];
    }
};