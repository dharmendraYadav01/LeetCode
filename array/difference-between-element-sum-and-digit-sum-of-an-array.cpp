class Solution {
public:
    int sum_val(int &n){
        int dig=0;
        while(n!=0){
            dig+=n%10;
            n/=10;
        }
        return dig;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int it:nums){
            sum+=it;
        }
        int digit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                digit+=nums[i];
            }
            else{
                digit+=sum_val(nums[i]);
            }
        }
        return abs(sum-digit);
    }
};