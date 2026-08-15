class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int Xor = 0;
        for (int it : nums) {
            Xor ^= it;
        }
        if (Xor != 0) {
            return nums.size();
        }
        bool flag = false;
        for (int it : nums) {
            if ((Xor ^ it) != 0) {
                flag = true;
                break;
            }
        }
        return flag ? nums.size() - 1 : 0;
    }
};