class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(int it:nums){
            sum+=it;
        }
        int count=0;
        long long left=0;
        for(int i=0;i<nums.size()-1;i++){
            left=left+nums[i];
            long long right=(sum-left);
            if(left>=right){
                count++;
            }
        }
        return count;
    }
};