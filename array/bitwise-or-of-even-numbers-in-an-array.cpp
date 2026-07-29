class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int or_=0;
        for(int it:nums){
            if(it%2==0){
                or_|=it;
            }
        }
        return or_;
    }
};