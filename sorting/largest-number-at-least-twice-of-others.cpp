class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>mishra;
        for(int &it:nums){
            mishra.push_back(it);
        }
        int size=nums.size();
        sort(mishra.begin(),mishra.end());
        int x=mishra[size-1];
        int y=mishra[size-2];
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(x==nums[i]){
                idx=i;
            }
        }
        if(x>=(2*y)){
            return idx;
        }
        return -1;
    }
};