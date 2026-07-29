class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count=0;
        long long ans=0;
        for(int &it:nums){
            if(it!=0) count=0;
            else count++;
            ans+=count;
        }
        return ans;
    }
};