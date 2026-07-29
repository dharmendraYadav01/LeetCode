class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1=0;
        int xor2=0;
        if(nums1.size()%2!=0){
            for(int nums:nums2){
                xor2^=nums;
            }
        }
        if(nums2.size()%2!=0){
            for(int nums:nums1){
                xor1^=nums;
            }
        }
        return xor1^xor2;
    }
};