class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) result.push_back(i);
        }
        for(int i=1;i<result.size();i++){
            if(result[i]-result[i-1]-1<k) return false;
        }
        return true;
    }
};