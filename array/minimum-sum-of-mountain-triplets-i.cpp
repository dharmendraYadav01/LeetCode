class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int sum=0;
        int minSum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i] < nums[j] && nums[k] < nums[j]){
                        sum=nums[i]+nums[j]+nums[k];
                        minSum=min(minSum,sum);
                    }
                }
            }
        }
        return minSum==INT_MAX?-1:minSum;
    }
};