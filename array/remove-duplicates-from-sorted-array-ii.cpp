class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int it:nums){
            mp[it]++;
        }
        for(auto &it:mp){
            while(it.second>2){
                it.second--;
            }
        }
        vector<int>result;
        for(auto &it:mp){
            while(it.second!=0){
                result.push_back(it.first);
                it.second--;
            }
        }
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        int i=0;
        while(i<result.size()){
            nums[i]=result[i];
            i++;
        }
        nums.erase(nums.begin()+i,nums.end());
        return nums.size();
    }
};