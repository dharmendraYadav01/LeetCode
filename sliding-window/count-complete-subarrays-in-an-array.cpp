class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        int ans=0;
        int n=st.size();
        for(int i=0;i<nums.size();i++){
            set<int>dist;
            for(int j=i;j<nums.size();j++){
                dist.insert(nums[j]);
                if(n==(int)dist.size()) ans++;
            }
        }
        return ans;
    }
};