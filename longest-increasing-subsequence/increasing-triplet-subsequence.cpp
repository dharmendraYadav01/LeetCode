class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        for(int it:nums){
            if(it<=first){
                first=it;
            }
            else if(it<=second){
                second=it;
            }else{
                if(it>second) return true;
            }
        }
        return false;
    }
};