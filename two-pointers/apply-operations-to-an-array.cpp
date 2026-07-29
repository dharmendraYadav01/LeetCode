class Solution {
public:
    void shift(vector<int>&result){
        int i=0;
        for(auto &it:result){
            if(it!=0){
                result[i]=it;
                i++;
            }
        }
        while(i<result.size()){
            result[i++]=0;
        }

    }
    vector<int> applyOperations(vector<int>& nums) {
        int i=0;
        int j=i+1;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]==nums[j]){
                nums[i]=nums[i]*2;
                nums[j]=0;
            }
            i++;
            j++;
        }
        shift(nums);
        return nums;
    }
};