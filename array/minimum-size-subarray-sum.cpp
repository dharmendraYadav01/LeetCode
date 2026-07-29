class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len=INT_MAX;
        int sum=0,j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                min_len=min(min_len,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(min_len!=INT_MAX){
            return min_len;
        }
        return 0;

        // using n2 greedy approch
        // int min_len=INT_MAX;
        // int len=nums.size();
        // for(int i=0;i<len;i++){
        //     int sum=0;
        //     for(int j=i;j<len;j++){
        //         sum+=nums[j];
        //         int n=j-i+1;
        //         if(sum>=target){
        //             min_len=min(n,min_len);
        //         }
        //     }
        // }
        // if(min_len!=INT_MAX){
        //     return min_len;
        // }
        // return 0;
    }
};