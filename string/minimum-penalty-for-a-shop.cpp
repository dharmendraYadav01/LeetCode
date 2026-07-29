class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> pre_N(n + 1, 0);
        vector<int> suf_Y(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pre_N[i + 1] = pre_N[i] + (customers[i] == 'N');
        }
        for (int i = n - 1; i >= 0; i--) {
            suf_Y[i] = suf_Y[i + 1] + (customers[i] == 'Y');
        }
        int ans = INT_MAX;
        int idx = 0;
        for (int i = 0; i <=n; i++) {
            int temp = pre_N[i] + suf_Y[i];
            if (temp < ans) {
                ans = temp;
                idx = i;
            }
        }
        return idx;
    }
};