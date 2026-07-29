class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[n-1];
        }
        while(n>1){
            vector<int>result(n-1);
            for(int i=0;i<n-1;i++){
                result[i]=(nums[i] + nums[i+1]) % 10;
            }
            nums=result;
            n=nums.size();
        }
        // vector<int>result(n-1);
        // for(int i=0;i<n-1;i++){
        //     result[i]=(nums[i] + nums[i+1]) % 10;
        //     if(i==n-2){
        //         nums=result;
        //         n=nums.size();
        //         if(result.size()!=1){
        //             result.clear();
        //             result.resize(n-1);
        //             i=0;
        //         }
        //     }
        // }
        // int val=0;
        // if(nums.size()==2){
        //     val=(nums[0] + nums[1]) % 10;
        // }
        // for(int it:nums){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // for(int it:result){
        //     cout<<it<<" ";
        // }
        return nums[0];
    }
};