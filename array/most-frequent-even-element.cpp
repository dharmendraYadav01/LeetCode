class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int min_freq=0;
        for(int it:nums){
            if(it%2==0){
                mp[it]++;
                min_freq=max(min_freq,mp[it]);
            }
        }
        int min_val=INT_MAX;
        for(auto it:mp){
            if(it.second==min_freq){
                min_val=min(min_val,it.first);
            }
        }
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        return min_val==INT_MAX?-1:min_val;
    }
};