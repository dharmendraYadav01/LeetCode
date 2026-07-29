class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &it:nums){
            mp[it]++;
        }
        vector<int>result;
        for(auto it:mp){
            int val=it.first;
            if(it.second==1 && mp.count(val-1)==0 && mp.count(val+1)==0){
                result.push_back(it.first);
            }
        }
        return result;
        // sort(nums.begin(),nums.end());
        // set<int>st;
        // for(int i=0;i<nums.size();i++){
        //     if(i==0 && nums[i+1]!=nums[i]+1){
        //         st.insert(nums[i]);
        //     }
        //     if(i==nums.size()-1 && nums[i-1]!=nums[i]-1){
        //         st.insert(nums[i]);
        //     }
        // }
        // for(int i=1;i<nums.size()-1;i++){
        //     if(st.count(nums[i])){
        //         st.erase(nums[i]);
        //     }
        //     else if(nums[i-1]!=nums[i]-1 && nums[i+1]!=nums[i]+1 ){
        //         st.insert(nums[i]);
        //     }
        // }
        // vector<int>result;
        // for(int it:st){
        //     result.push_back(it);
        // }
        // return result;
    }
};