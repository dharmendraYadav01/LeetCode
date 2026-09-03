class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = nums1[0];
        for (int i = 1; i < nums1.size(); i++) {
            if (mini > nums1[i])
                mini = nums1[i];
        }
        if (mini % 2 == 1)
            return true;

        bool anyOdd = false;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 1)
                anyOdd = true;
        }
        return anyOdd == true ? false : true;
    }
};