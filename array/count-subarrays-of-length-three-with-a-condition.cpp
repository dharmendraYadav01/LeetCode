class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-2;i++){
            if(2*(nums[i]+nums[i+2])==(nums[i+1]))count++;
        } return count;
        // vector<vector<int>>result;
        // for(int i=0;i<nums.size()-2;i++){
        //     vector<int>ans;
        //     for(int j=i;j<i+3;j++){
        //         ans.push_back(nums[j]);
        //     }
        //     result.push_back(ans);
        // }
        // int count=0;
        // for(auto it:result){
        //     if(2*(it[0]+it[2])==it[1]){
        //         count++;
        //     }
        // }
        // return count;
    }
};

// 1 2 1 
// 2 1 4 
// 1 4 1 