class Solution {
public:
    int reverse_val(int n){
        int temp=0;
        while(n!=0){
            temp=temp*10+(n%10);
            n/=10;
        }
        return temp;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>result;
        set<int>st;
        for(int i:nums){
            st.insert(i);
        }
        for(int i=0;i<nums.size();i++){
            result.push_back(reverse_val(nums[i]));
        }
        for(int it:result){
            st.insert(it);
        }
        return st.size();
    }
};