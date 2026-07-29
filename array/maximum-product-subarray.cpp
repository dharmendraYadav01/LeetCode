class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prd=nums[0];
        int min_prd=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(max_prd,min_prd);
            }
            max_prd=max(nums[i],max_prd*nums[i]);
            min_prd=min(nums[i],min_prd*nums[i]);
            ans=max(max_prd,ans);
        }
        return ans;
    }
};