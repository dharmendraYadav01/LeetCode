class Solution {
public:
    int cal(vector<int>& nums,int val){
        int i=0;
        int j=nums.size()-1;
        while(i<nums.size()){
            if(nums[i]==val) break;
            i++;
        }
        while(j>=0){
            if(nums[j]==val) break;
            j--;
        }
        return j-i+1;
    }
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[&](auto a,auto b){
            return a.second>b.second;
        });
        int mx=INT_MIN;
        int min_len=INT_MAX;
        for(auto it:vec){
            if(it.second>=mx){
                mx=it.second;
                int len=cal(nums,it.first);
                min_len=min(min_len,len);
            }
        }
        return min_len;
    }
};