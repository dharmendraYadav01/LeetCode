class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(first==-1) first=i;
                last=i;
            }
        }        
        return {first,last};
    }
};
// class Solution {
// public:
//     int findfirst(vector<int>& nums, int target){
//         int start=0;
//         int end=nums.size()-1;
//         int idx=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(nums[mid]==target){
//                 idx=mid;
//             }
//             if(nums[mid]>=target){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
            
//         }
//         return idx;
//     }
//     int findlast(vector<int>& nums, int target){
//         int start=0;
//         int end=nums.size()-1;
//         int idx=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(nums[mid]==target){
//                 idx=mid;
//             }
//             if(nums[mid]<=target){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
            
//         }
//         return idx;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         return {findfirst(nums,target),findlast(nums,target)};
//     }
// };