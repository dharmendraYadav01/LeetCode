class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int oper=0;
        for(int &it:nums){
            int rem=it%3;
            if(rem>0){
                oper+=min(rem,(3-rem));
            }
        }
        return oper;
    }
};