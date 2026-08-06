class Solution {
public:
    int GCD(vector<int>& nums, int L, int R) {
        int g = nums[L];
        for (int i = L; i <= R; i++) {
            g = gcd(g, nums[i]);
            if (g == 1)
                return 1;
        }
        return g;
    }
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ones = 0;
        for (int it : nums) {
            if (it == 1)
                ones++;
        }
        if (ones > 0)
            return n - ones;
        int flag = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int g = nums[i];
            if (g == 1) {
                flag = 1;
                break;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                g = GCD(nums, i, j);
                if (g == 1) {
                    flag = min(flag, j - i + 1);
                    break;
                }
            }
        }
        if (flag == INT_MAX)
            return -1;
        return flag + n - 2;
    }
};