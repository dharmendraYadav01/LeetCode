class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min_sum=INT_MAX;
        int len=nums.size();
        for(int i=0;i<len;i++){
            int sum=0;
            for(int j=i;j<len;j++){
                sum+=nums[j];
                int n=j-i+1;
                if(n>=l && n<=r && sum>0){
                    min_sum=min(min_sum,sum);
                }
            }
        }
        if(min_sum!=INT_MAX){
            return min_sum;
        }
        return -1;

    }
};