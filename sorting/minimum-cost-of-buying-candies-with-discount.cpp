class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(), cost.rend());
        int sum = 0;
        int i = 0;
        while (i < cost.size()) {
            sum += cost[i];
            i++;
            if (i < cost.size())
                sum += cost[i];
            i += 2;
        }
        return sum;
    }
};