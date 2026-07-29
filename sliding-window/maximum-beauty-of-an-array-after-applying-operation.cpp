class Solution {
public:
    bool all_same(vector<int>& nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                return false;
            }
        }
        return true;
    }
    int maximumBeauty(vector<int>& nums, int k) {
        int count=1;
        if(all_same(nums)){
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        int left=0; //hum yaha sliding approch use kar rahe hai
        for(int i=0;i<nums.size();i++){
            while(nums[i]-nums[left]>2*k){
                left++;
            }
            count=max(count,i-left+1);
        }
        return count;
    }
};