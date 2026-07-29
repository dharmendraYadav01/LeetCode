class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int min_val=nums[0];
        int max_val=nums[size-1];
        // if(size<1){
        //     return 0;
        // }
        return max(0,max_val-min_val-2*k);
    }
};