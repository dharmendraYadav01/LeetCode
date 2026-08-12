class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        // for(int it:nums){
        //     freqp[it]++;
        // }
        int cnt = 0;
        int ans = INT_MIN;
        for (int i : nums) {
            freq[i]++;
            if (freq[i] <= k || !freq.count(i)) {
                cnt++;
            } else if (freq[i] > k) {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        return ans;
    }
};