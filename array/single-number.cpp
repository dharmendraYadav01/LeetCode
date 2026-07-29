class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_bm = 0;
        for (int it : nums) {
            xor_bm ^= it;
        }
        return xor_bm;
    }
};