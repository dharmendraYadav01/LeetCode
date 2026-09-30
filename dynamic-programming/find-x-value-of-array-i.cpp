class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> prevCount(k, 0);
        for (int i = 0; i < nums.size(); i++) {
            vector<long long> curr(k, 0);
            int rem = nums[i] % k;
            curr[rem]++;
            for (int old = 0; old < k; old++) {
                long long new_rem = ((long long)old * nums[i] % k) % k;
                curr[new_rem] += prevCount[old];
            }
            prevCount = move(curr); // using move we directly move one array to another in optimize way
            for (int x = 0; x < k; x++) {
                ans[x] += prevCount[x];
            }
        }
        return ans;
    }
};