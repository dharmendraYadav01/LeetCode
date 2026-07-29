class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        vector<string>result;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        vector<pair<string,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[&](auto a,auto b){
            if(a.second==b.second) return a.first<b.first;
            return a.second>b.second;
        });
        for(auto &it:vec){
            if(k-->0){
                result.push_back(it.first);
            }
        }
        return result;
    }
};