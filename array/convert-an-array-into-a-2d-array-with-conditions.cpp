class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>>finally;

        while(!mp.empty()){
            vector<int>result;
            for(auto it=mp.begin();it!=mp.end();){
                if(it->second>0){
                    it->second--;
                    result.push_back(it->first);
                    if(it->second==0){
                        it=mp.erase(it);
                    }else{
                        it++;
                    }
                }
            }
            if(!result.empty()){
                finally.push_back(result);
            }
        }
        return finally;
    }
};