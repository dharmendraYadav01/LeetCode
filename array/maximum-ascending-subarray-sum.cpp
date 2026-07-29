class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0],cur=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                sum+=nums[i];
            }
            else{   
                cur=max(cur,sum);
                sum=nums[i];
            }

        }
        cur=max(cur,sum);

        return cur;
    }
};