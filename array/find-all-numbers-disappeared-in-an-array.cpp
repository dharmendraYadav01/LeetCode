class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(binary_search(nums.begin(),nums.end(),i)){
                continue;
            }
            result.push_back(i);
        }
        return result;
    }
};