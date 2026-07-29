class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        vector<int> ans;
        int cnt = 0;
        while (i < nums.size() && j < nums.size()) {
            if (nums[i] == nums[j]) {
                cnt++;
                j++;
            } else if (cnt > k) {
                int time = k;
                while (time--) {
                    ans.push_back(nums[i]);
                }
                i = j;
                cnt = 0;
            } else if (cnt <= k) {
                while (cnt--) {
                    ans.push_back(nums[i]);
                }
                cnt = 0;
                i = j;
            }
        }
        if (cnt > k) {
            int time = k;
            while (time--) {
                ans.push_back(nums[i]);
            }
        } else {
            while (cnt--) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};