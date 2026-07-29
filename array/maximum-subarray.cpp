class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_num=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            max_num=max(max_num,sum);
            if(sum<0){
                sum=0;
            }
        }
        return max_num;
    }
};