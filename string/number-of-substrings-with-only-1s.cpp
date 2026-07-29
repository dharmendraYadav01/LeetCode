class Solution {
public:
    int numSub(string s) {
        int i=0;
        long long count=0;
        long long res=0;
        int mod=1e9+7;
        while(i<s.length()){
            if(s[i]=='1'){
                count++;
            }else{
                res+=((count*(count+1)/2)%mod)%mod;
                count=0;
            }
            i++;
        }
        res+=((count*(count+1)/2)%mod)%mod;
        return res;
    }
};