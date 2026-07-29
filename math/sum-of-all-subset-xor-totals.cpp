class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int OR = 0;
        for (int i : nums) {
            OR |= i;
        }
        return OR * (1 << nums.size() - 1);
    }
};