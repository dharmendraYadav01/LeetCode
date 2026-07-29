class Solution {
public:
    void printSubset(vector<int>&nums,vector<int>&result,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.push_back(result);
            return;
        }

        // include
        result.push_back(nums[idx]);
        printSubset(nums,result,ans,idx+1);

        //exclude
        result.pop_back(); // for backtracking
        printSubset(nums,result,ans,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>result;
        printSubset(nums,result,ans,0);
        return ans;
    }
};