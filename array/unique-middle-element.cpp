class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        int mid = (l + r) / 2;
        int target = nums[mid];
        int cnt = 0;
        for (int it : nums) {
            if (it == target)
                cnt++;
        }
        return cnt == 1 ? 1 : 0;
    }
};