class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums){
            mp[it]++;
        }
        vector<int>res;
        for(auto it:mp){
            res.push_back(it.second);
        }
        sort(res.rbegin(),res.rend());
        for(int it:res){
            cout<<it<<" ";
        }
        int count=res[0];
        int sum=count;
        for(int i=1;i<res.size();i++){
            if(res[i]>=count){
                sum+=res[i];
            }
        }
        return sum;
    }
};