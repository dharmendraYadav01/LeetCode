class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int>st;
        int sum;
        for(int &it:nums){
            st.insert(it);
        }
        if(st.size()==1){
            return 0;
        }
        // else{
        //     sum=nums[0];
        //     for(int i=1;i<nums.size();i++){
        //         sum=sum & nums[i];
        //     }
        // }
        // cout<<sum;
        return 1;
    }
};