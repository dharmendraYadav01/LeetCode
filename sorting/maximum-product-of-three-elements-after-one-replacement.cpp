class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        for(auto& it:nums){
            it=abs(it);
        }
        sort(nums.begin(),nums.end());
        return (long long)nums[nums.size()-2] *(long long)nums[nums.size()-1]*100000;
        
    }
};