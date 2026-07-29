class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0) return {};
        vector<int>result;
        unordered_map<int,int>mp;
        sort(changed.begin(),changed.end());
        for(int it:changed){
            mp[it]++;
        }
        for(int it:changed){
            if(mp[it]==0) continue;
            if(mp[2*it]==0) return {};
            result.push_back(it);
            mp[it]--;
            mp[2*it]--;
        }
        return result;
    }
};