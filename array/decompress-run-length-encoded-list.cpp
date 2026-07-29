class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>result;
        for(int i=1;i<nums.size();i=i+2){
            int j=nums[i-1];
            while(j--){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};