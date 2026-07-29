class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int maxi = nums[0];
        vector<int> base;
        base.push_back(maxi);
        for (int i = maxi; i > 0; i--) {
            base.push_back(i);
        }
        if (nums.size() != base.size())
            return false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != base[i])
                return false;
        }
        return true;
    }
};