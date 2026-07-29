class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0 && k>0){
                nums[i]=-nums[i];
                k--;
            }
        }
        sort(nums.begin(),nums.end());
        if(k%2!=0){
            nums[0]=-nums[0];
        }
        for(int it:nums){
            sum+=it;
        }
        // for(int it:nums){
        //     sum+=it;
        // }
        // int i=0;
        // while(i<nums.size()){
        //     if(nums[i]>0 && k%2!=0){
        //         sum-=(2*nums[i]);
        //         break;
        //     }else break;
        // }
        // i=0;
        // while(i<nums.size() && k--){
        //     if(nums[i]<0 && k%2!=0){
        //         sum+=abs(2*nums[i]);
        //     }
        //     i++;
        // }
        return sum;
    }
};