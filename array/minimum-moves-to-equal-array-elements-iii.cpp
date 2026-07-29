class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=abs(nums[i]-n);
        }
        return sum;
    }
};