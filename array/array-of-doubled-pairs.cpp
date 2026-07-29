class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[&](int a,int b){
            return abs(a)<abs(b);
        });

        // for(int it :arr){
        //     cout<<it<<" ";
        // }
        // vector<int>result;
        unordered_map<int,int>mp;
        for(int it:arr){
            mp[it]++;
        }
        for(auto it:arr){
            if(mp[it]==0) continue;
            if(mp[2*it]==0) return false;
            // result.push_back(it);
            // result.push_back(2*it);
            mp[it]--;
            mp[2*it]--;
        }
        return true;
    }
};