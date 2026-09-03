class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());
        for (int i = 1; i < nums1.size(); i++) {
            if (nums1[i] - nums1[i - 1] <= 1)
                return false;
        }
        return true;
    }
};