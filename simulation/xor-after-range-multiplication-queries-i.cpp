class Solution {
public:
    const int MOD=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int idx;
        for(auto &it:queries){
            int l=it[0];
            int r=it[1];
            int k=it[2];
            int v=it[3];
            idx=l;
            while(idx<=r){
                nums[idx]=(1LL*nums[idx]*v)% MOD; //use long long for safty
                idx+=k;
            }
        }
        int xor_=0;
        for(int &it:nums){
            xor_^=it;
        }
        return xor_;
    }
};