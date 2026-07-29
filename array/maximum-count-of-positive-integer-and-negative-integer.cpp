class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int diff=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                diff++;
            }
            else if(nums[i]>0){
                sum++;
            }
        }
        return max(diff,sum);
    }
};