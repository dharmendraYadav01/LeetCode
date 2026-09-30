class Solution {
public:
    int find_range(int n) {
        int mini = 10, maxi = 0;
        while (n > 0) {
            int r = n % 10;
            mini = min(r, mini);
            maxi = max(r, maxi);
            n /= 10;
        }
        return maxi - mini;
    }

    int maxDigitRange(vector<int>& nums) {
        int mx = -1;
        for (int num : nums) {
            mx = max(mx, find_range(num));
        }
        int sum = 0;
        for (int i : nums) {
            if (find_range(i) == mx) {
                sum += i;
            }
        }
        return sum;
    }
};