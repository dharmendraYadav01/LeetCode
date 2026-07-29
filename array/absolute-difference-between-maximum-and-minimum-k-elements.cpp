class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        int sum1=0;
        int n=k;
        int sum2=0;
        while(i>=0 && k--){
            sum1+=nums[i];
            i--;
        }
        i=0;
        
        while(i<nums.size() && n--){
            sum2+=nums[i];
            i++;
        }
        return abs(sum1-sum2);
    }
};