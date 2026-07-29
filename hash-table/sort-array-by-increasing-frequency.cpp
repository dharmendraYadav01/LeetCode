class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>result;
        for(int it:nums){
            mp[it]++;
        }

        // here we use custom comparetor=i.e. your own logic like lembda function
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(mp[a]==mp[b]) return a>b; // if frequency of two value is same then then the bigger number comes first;
            return mp[a]<mp[b]; // if diff then then the one with smaller frequency comes first
        });
        return nums;
    }
};