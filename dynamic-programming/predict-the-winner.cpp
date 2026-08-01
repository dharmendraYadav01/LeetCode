class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        
        if (nums.size() % 2 == 0 || nums.size()==1)
            return true;
        return false;
    }
};