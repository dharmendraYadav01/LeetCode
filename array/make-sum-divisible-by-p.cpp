class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum=0;
        for(int it:nums){
            sum=(sum+it)%p;
        }
        int target=sum%p;
        if(target==0) return 0;
        unordered_map<int,int>mp;
        int curr=0;
        mp[curr]=-1;
        int ans=nums.size();
        for(int i=0;i<nums.size();i++){
            curr=(curr+nums[i])%p;
            int val=(curr-target+p)%p;
            if(mp.find(val)!=mp.end()){
                int len=i-mp[val];
                ans=min(ans,len);
            }
            mp[curr]=i;
        }
        return ans==nums.size()?-1:ans;
    }
};