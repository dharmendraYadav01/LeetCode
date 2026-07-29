class Solution {
public:
    int GetSum(vector<int>& nums){
        int sum=0;
        for(int it:nums){
            sum+=it;
        }
        return sum;
    }
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=(n*(n+1))/2;
        int sum=GetSum(nums);
        return total-sum;
    }
};