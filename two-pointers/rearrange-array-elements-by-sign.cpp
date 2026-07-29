class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size=nums.size();
        vector<int>result(size,0);
        int even=0;
        int odd=1;
        for(int it:nums){
            if(it>0){
                result[even]=it;
                even+=2;
            }else{
                result[odd]=it;
                odd+=2;
            }
        }
        return result;
    }
};