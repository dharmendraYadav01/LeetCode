class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum=0;
        int count=0;
        for(int it:nums){
            sum+=it;
            if(sum==0){
                count++;
            }
        }
        return count;
    }
};