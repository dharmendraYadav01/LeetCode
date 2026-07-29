class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return n;
        int high=2;
        int count=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i-1]+nums[i-2]==nums[i]){
                count++;
            }else{
                count=2;
            }
            high=max(high,count);
        }
        return high;
        // int count=0;
        // for(int i=0;i<nums.size()-2;i++){
        //     if((nums[i]+nums[i+1])==nums[i+2]){
        //         count++;
        //     }
        // }
        // return count+2;
    }
};