class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first=nums[0];
        vector<int>result;
        int second=nums[nums.size()-1];
        for(int i=first;i<=second;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};