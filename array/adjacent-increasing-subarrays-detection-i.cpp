class Solution {
public:
    bool Isincrese(vector<int>& result, int start, int end) {
        if (end > result.size()) return false;
        for (int i = start; i < end-1; i++) {
            if (i < result.size()) {
                if (result[i] >= result[i+1])
                    return false;
            }
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (Isincrese(nums, i, i + k) &&
                Isincrese(nums, i + k, i + 2 * k)) {
                return true;
            }
        }
        return false;
    }
};