class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto &num:nums){
            mp[num]++;
        }
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(mp[num]>n/2){
                return num;
            }
        }
        return -1;
    }
};