class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>answer;
        sort(nums.begin(),nums.end());
        answer.push_back(nums);
        for(int it:nums){
            cout<<it<<" ";
        }
        while(next_permutation(nums.begin(),nums.end())){
            answer.push_back(nums);
        }
        return answer;
    }
};