class Solution {
public:
    int maxdig(int it){
        int ans=0;
        while(it>0){
            ans=max(ans,it%10);
            it/=10;
        }
        return ans;
    }
    int maxSum(vector<int>& nums) {
        vector<int>result;
        for(int it:nums){
            result.push_back(maxdig(it));
        }
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(result[i]==result[j]){
                    ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
    }
};