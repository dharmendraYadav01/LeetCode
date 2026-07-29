class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mp;
        while(n!=0){
            mp[n%10]++;
            n/=10;
        }
        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[&](auto a,auto b){
            if(a.second==b.second) return a.first<b.first;
            return a.second<b.second;
        });
        int val=vec[0].first;
        return val;
    }
};