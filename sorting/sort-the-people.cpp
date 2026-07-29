class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>result;
        unordered_map<int,string>mp;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=names[i];
        }
        vector<pair<int,string>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[&](auto &a,auto &b){
            return a.first>b.first;
        });
        for(auto &it:vec){
            result.push_back(it.second);
        }
        return result;
    }
};