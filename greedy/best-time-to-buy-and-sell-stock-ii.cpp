class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_pro=prices[0];
        int max_pro=prices[0];
        int profit=0;
        int i=0;
        while(i<n-1){
            while(i<n-1 && prices[i]>=prices[i+1]){
                i++;
            }
            min_pro=prices[i];
            while(i<n-1 && prices[i]<=prices[i+1]){
                i++;
            }
            max_pro=prices[i];
            profit+=max_pro-min_pro;
        }
        return profit;
    }
};