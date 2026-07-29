class Solution {
public:
    vector<int>ans;
    Solution(vector<int>& nums) {
        ans=nums;
    }
    
    int pick(int target) {
        vector<int>idx;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==target){
                idx.push_back(i);
            }
        }
        return idx[rand()%idx.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */