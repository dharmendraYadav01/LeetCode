class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max_=1;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
                max_=max(count,max_);
            }else count=1;
        }
        
        return max_;
    }
};