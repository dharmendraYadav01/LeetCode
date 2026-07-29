class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int maxi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                maxi=min(maxi,abs(i-start));
            }
        }
        return maxi;
    }
};