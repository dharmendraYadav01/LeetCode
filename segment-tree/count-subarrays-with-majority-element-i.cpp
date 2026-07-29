class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+(nums[i]==target?1:-1);
        }
        long long ans=0;
        map<int,int>freq;
        freq[0]=1;
        for(int j=1;j<=n;j++){
            for(auto it=freq.begin();it!=freq.lower_bound(pre[j]);++it){
                ans+=it->second;
            }
            freq[pre[j]]++;
        }
        return ans;
    }
};