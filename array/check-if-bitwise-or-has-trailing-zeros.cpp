class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int e=0;
        for(int it:nums){
            if(it%2==0) e++;
            if(e>2) break;
        }
        if(e>1) return true;
        return false;
    }
};