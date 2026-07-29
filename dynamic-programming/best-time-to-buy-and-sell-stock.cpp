class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_pro = prices[0];
        int max_pro = 0;
        int profit = 0;
        for (int i = 1; i < n; i++) {
            min_pro = min(min_pro, prices[i]);
            max_pro = max(max_pro, prices[i] - min_pro);
        }
        return max_pro;
    }
};