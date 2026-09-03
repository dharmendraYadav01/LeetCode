class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // if smallest element is odd then always return true;
        int mini = nums1[0];
        for (int i = 1; i < nums1.size(); i++) {
            if (mini > nums1[i])
                mini = nums1[i];
        }
        if (mini % 2 == 1)
            return true;

        // then smallest element is even then check their exist any odd number
        bool anyOdd = false;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 1)
                anyOdd = true; // if odd element present then we never form all even or all odd parity in nums2 it always gives false answer.
        }
        return anyOdd == true ? false : true;
    }
};