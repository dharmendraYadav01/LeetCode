class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int>target;
        int j=0;
        for(int i=0;i<index.size() && j<nums.size();i++){
            target.insert(target.begin()+index[i],nums[j++]);

        }
        return target;
    }
};