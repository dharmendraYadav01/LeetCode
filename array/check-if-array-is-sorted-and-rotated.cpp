class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0;
        while (i++ < nums.size()) {
            vector<int>mishra(nums.begin(),nums.end());
            rotate(nums.begin(), nums.begin() + i, nums.end());
            if (is_sorted(nums.begin(), nums.end()))
                return true;
            nums=mishra;
        }
        return false;
    }
};