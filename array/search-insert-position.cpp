class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid=0;
        int start=0;
        int last=nums.size()-1;
        while(start<=last){
            mid=(start+last)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else {
                last=mid-1;
            }
        }
        return start;
    }
};