class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v1;
        vector<int>v2;
        vector<int>result;
        int i=0;
        while(i<n){
            v1.push_back(nums[i++]);
        }
        i=n;
        while(i<nums.size()){
            v2.push_back(nums[i++]);
        }
        i=0;
        int j=0;
        while(i<v1.size() && j<v2.size()){
            result.push_back(v1[i++]);
            result.push_back(v2[j++]);
        }
        return result;
    }
};