class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_map<int,vector<int>>mp;
        for(int i=1;i<=1e9;i=i*2){
            int k=i;
            vector<int>v(10,0);
            while(k){
                v[k%10]++;
                k/=10;
            }
            mp[i]=v;
        }
        vector<int> count_n(10,0);
        while(n){
            count_n[n%10]++;
            n/=10;
        }
        for(int i=1;i<=1e9;i*=2){
            vector<int>res=mp[i];
            bool flag=false;
            for(int j=0;j<=9;j++){
                if(res[j]!=count_n[j]){
                    flag=true;
                }
            }
            if(flag==false){
                return true;
            }
        }
        return false;
    }
};