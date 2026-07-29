class Solution {
public:
    int find_bit(int x){
        return __builtin_popcount(x); // it give no. of 1's bit in number(set bits)
    }
    vector<int> sortByBits(vector<int>& arr) {
        // unordered_map<int,int>mp; ----------> it give wrong for duplicates val
        // for(int it:arr){
        //     int n=find_bit(it);
        //     // cout<<n<<endl;
        //     mp[it]=n;
        // }
        vector<pair<int,int>>rec; // that why we use pair vector
        for(int it:arr){
            rec.push_back({it,find_bit(it)});
        }
        // for(auto it:mp){
        //     rec.push_back(it);
        // }
        sort(rec.begin(),rec.end(),[&](auto a,auto b){
            if(a.second==b.second) return a.first<b.first;
            return a.second<b.second;
        });
        vector<int>result;
        for(auto it:rec){
            result.push_back(it.first);
        }

        // for(auto it:rec){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        return result;
    }
};