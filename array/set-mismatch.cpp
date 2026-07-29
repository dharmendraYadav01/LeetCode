class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int it:nums){
            mp[it]++;
        }
        int missing=-1;
        int dup=-1;
        for(int i=0;i<=nums.size();i++){
            if(mp[i]==2) dup=i;
            if(mp[i]==0) missing=i;
        }
        return {dup,missing};
    }
};