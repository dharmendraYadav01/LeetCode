class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>result(s.begin(),s.end());
        sort(result.rbegin(),result.rend());
        if(result.size()<3){
            return result[0];
        }
        return result[2];
    }
};