class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n-k+1;i++){
            unordered_map<int,int>mp;
            for(int j=i;j<k+i;j++){
                mp[nums[j]]++;
            }
            vector<pair<int,int>>vec;
            for(auto &it:mp){
                vec.push_back(it);
            }
            sort(vec.begin(),vec.end(),[&](auto a,auto b){
                if(a.second==b.second) return a.first>b.first;
                return a.second>b.second;
            });
            int sum=0;
            for(int i=0;i<vec.size() && i<x;i++){
                sum+=vec[i].first*vec[i].second;
            }
            result.push_back(sum);
        }
        return result;
    }
};