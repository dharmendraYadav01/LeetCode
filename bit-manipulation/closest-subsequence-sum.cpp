class Solution {
public:
    int minAbsDifference(vector<int>& nums, int goal) {
        int n = nums.size();
        int n1 = n / 2;
        int n2 = n - n1;
        vector<int> sumsubA(1 << n1); // sum of every subset formed in first half
        for (int mask = 0; mask < (1 << n1); mask++) { // it bitwise method to find sum of subset
            int sum = 0;
            for (int i = 0; i < n1; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i];
                }
            }
            sumsubA[mask] = sum;
        }
        vector<int> sumsubB(1 << n2); // sum of every subset formed in second half
        for (int mask = 0; mask < (1 << n2); mask++) {
            int sum = 0;
            for (int i = 0; i < n2; i++) {
                if (mask & (1 << i)) {
                    sum += nums[n1 + i];
                }
            }
            sumsubB[mask] = sum;
        }
        sort(sumsubB.begin(), sumsubB.end()); // sort so that we apply binary search(logn)
        int ans = INT_MAX;
        for (int sum1 : sumsubA) {
            int need = goal - sum1;
            int low = lower_bound(sumsubB.begin(), sumsubB.end(), need) - begin(sumsubB);   // find index of needed element
            if (low < sumsubB.size()) { // check for that index i
                int sum2 = sumsubB[low];
                int sum = sum1 + sum2;
                ans = min(ans, abs(sum - goal));
            }
            if (low > 0) {
                int sum2 = sumsubB[low - 1]; // check for index i-1
                int sum = sum1 + sum2;
                ans = min(ans, abs(sum - goal));
            }
        }
        return ans;
    }
};