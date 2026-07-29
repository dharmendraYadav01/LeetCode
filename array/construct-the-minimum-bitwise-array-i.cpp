class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                ans.push_back(-1);
            }
            int k = 1;
            while (k < 1000) {
                if ((k | (k + 1)) == nums[i]) {
                    ans.push_back(k);
                    break;
                }
                k++;
            }
        }
        return ans;
    }
};