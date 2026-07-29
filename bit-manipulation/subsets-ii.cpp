class Solution {
public:
    void printSubset(vector<int>&nums,vector<int>&result,set<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.insert(result);
            return;
        }

        // include
        result.push_back(nums[idx]);
        printSubset(nums,result,ans,idx+1);

        //exclude
        result.pop_back(); // for backtracking
        printSubset(nums,result,ans,idx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>result;
        sort(nums.begin(),nums.end());
        printSubset(nums,result,ans,0);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};