class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int it=0;it<nums.size()-1;it++){
            if(nums[it]==key) {
                mp[nums[it+1]]++;
            }
        }
        int max_=0;
        int target=-1;
        for(auto &it:mp){
            if(it.second>max_){
                max_=it.second;
                target=it.first;
            }

        }
        return target;
    }
};