class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int lb=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i])-nums.begin();
            int ub=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i])-nums.begin();
            count=count+(ub-lb);
            // int r=i;
            // int l=n-1;
            // // int max_no=max(nums[i],nums[i+1]);
            // // int min_no=min(nums[i],nums[i+1]);
            // // // for(int j=i+1;j<n;j++){
            // //     if(min_no+max_no>=lower && min_no+max_no<=upper){
            // //         count++;
            // //     }    
            // // // }
        }
        return count;
    }
};