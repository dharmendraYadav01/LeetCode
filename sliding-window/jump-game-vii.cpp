class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();
        vector<int> res(n, 0);
        int cnt = 0;
        res[0] = 1;
        for (int j = 1; j <= n - 1; j++) {
            if (j - minJump >= 0) {
                cnt += res[j - minJump];
            }
            if (j - maxJump - 1 >= 0) {
                cnt -= res[j - maxJump - 1];
            }
            if (cnt > 0 && s[j] == '0') {
                res[j] = 1;
            }
        }
        return res[n - 1] > 0;
    }
};