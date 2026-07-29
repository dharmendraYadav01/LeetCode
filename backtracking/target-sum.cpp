class Solution {
public:
    int solve(vector<int>& nums,int i,int sum,int target){
        if(i==nums.size()){
            if(sum==target){
                return 1;
            }else return 0;
        }
        int plus=solve(nums,i+1,sum+nums[i],target);
        int minus=solve(nums,i+1,sum-nums[i],target);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {

        return solve(nums,0,0,target);
        // int n=nums.size();
        // if(n<=1 && nums[0]==target){
        //     return 1;
        // }
        
        // for(int it:nums){
        //     sum+=it;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(abs(sum-(2*nums[i]))==abs(target)){
        //         count++;
        //     }
        // }
        // return count;
    }
};