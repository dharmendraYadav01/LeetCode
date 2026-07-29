class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(i!=j && j!=k && i!=k && nums[i]==nums[j] && nums[j]==nums[k]){
                        ans=min(ans,abs(i-j)+abs(j-k)+abs(i-k));
                    }
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};