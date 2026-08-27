class Solution {
public:
    string lexGreaterPermutation(string s, string target) {

        string ans = s;
        string res = "";
        sort(ans.begin(), ans.end());
        if (ans > target)
            return ans;
        while (next_permutation(ans.begin(), ans.end())) {
            if (ans > target) {
                return ans;
            }
        }
        return "";
    }
};