class Solution {
public:
    void delete_dup(vector<int>&nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        for(int it:nums){
            cout<<it<<" ";
        }
    }
    int countHillValley(vector<int>& nums) {
        delete_dup(nums);
        int hill=0;
        int valley=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                hill++;
            }
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
                valley++;
            }
        }
        return hill+valley;
    }
};