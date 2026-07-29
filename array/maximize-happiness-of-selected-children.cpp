class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        long long desc = 0;
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        for (int i = happiness.size() - 1; i >= (n - k); i--) {
            long long val = happiness[i] - desc;
            if (val > 0)
                sum += val;
            desc++;
        }

        return sum;
    }
};