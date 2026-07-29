class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        unordered_map<int,int>mp;
        for(int i=0;i<divisors.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0){
                    count++;
                }
            }
            mp[divisors[i]]=count;
        }
        int maxcount=0;
        for(auto &it:mp){
            maxcount=max(maxcount,it.second);
        }
        vector<int>result;
        for(auto &it:mp){
            if(it.second==maxcount){
                result.push_back(it.first);
            }
        }
        sort(result.begin(),result.end());
        return result[0];
    }
};