class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> curr(n + 1, 0);
        vector<int> next(n + 1, 0);
        // base case
        curr[n - 1] = 1;

        // bottom up
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                // base case
                if (i == m - 1 && j == n - 1) {
                    continue;
                }
                int ans = 0;
                // down
                ans += next[j];
                // right
                ans += curr[j + 1];
                curr[j] = ans;
            }
            next = curr;
        }
        return curr[0];
    }
};