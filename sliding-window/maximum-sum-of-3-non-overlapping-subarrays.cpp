class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n+1,0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        vector<int> sum(n, 0);
        for (int i = 0; i <= n - k; i++) {
            sum[i] = prefix[i + k] - prefix[i];
        }

        vector<int> left(n, 0);
        int bestLeft = 0;
        for (int i = 0; i <= n - k; i++) {
            if (sum[i] > sum[bestLeft]) {
                bestLeft = i;
            }
            left[i] = bestLeft;
        }

        vector<int> right(n, 0);
        int bestRight = n - k;
        for (int i = n - k; i >= 0; i--) {
            if (sum[i] >= sum[bestRight]) { 
                bestRight = i;
            }
            right[i] = bestRight;
        }

        vector<int> result(3, 0);
        int maxSum = 0;
        for (int j = k; j <= n - 2 * k; j++) {
            int i = left[j - k];
            int l = right[j + k];
            int total = sum[i] + sum[j] + sum[l];
            if (total > maxSum) {
                maxSum = total;
                result = {i, j, l};
            }
        }
        return result;

    }
};