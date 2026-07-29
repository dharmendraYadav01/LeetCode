class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int mod=1e9+7;
        vector<int>t(high+1,0);
        for(int i=high;i>=0;i--){
            if(i>=low){
                t[i]++;
            }
            if(i+zero<=high){
                t[i]=(t[i]+t[i+zero])%mod;
            }
            if(i+one<=high){
                t[i]=(t[i]+t[i+one])%mod;
            }
        }
        return t[0];
    }
};