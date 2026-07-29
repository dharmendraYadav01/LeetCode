class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>result;
        for(int &it:nums){
            if(it%2!=0){
                result.push_back(1);
            }
            else{
                result.push_back(0);
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};