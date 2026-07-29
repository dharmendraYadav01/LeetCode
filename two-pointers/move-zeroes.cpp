class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>result;
        for(int it:nums){
            if(it!=0){
                result.push_back(it);
            }
        }
        for(int it:nums){
            if(it==0){
                result.push_back(it);
            }
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=result[i];
        }
    }
};