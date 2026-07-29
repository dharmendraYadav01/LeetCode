class Solution {
public:
    bool Sorted(vector<int>&result){
        for(int i=1;i<result.size();i++){
            if(result[i-1]>=result[i]){
                return false;
            }
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            nums.erase(nums.begin()+i);
            if(Sorted(nums)){
                return true;
            }else{
                nums.insert(nums.begin()+i,val);
            }
        }
        return false;
    }
};