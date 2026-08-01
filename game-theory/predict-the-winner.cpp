class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        if (nums.size() % 2 == 0)
            return true;
        return false;
    }
};