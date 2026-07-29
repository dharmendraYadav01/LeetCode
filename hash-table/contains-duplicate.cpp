class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        unordered_set<int>result;
        for(int i=0;i<n;i++){
            if(!result.insert(nums[i]).second){
                return true;
            }
        }
        
        return false;
    }
};