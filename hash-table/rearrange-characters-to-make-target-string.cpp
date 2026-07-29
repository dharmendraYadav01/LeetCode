class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        unordered_map<char,int>need;
        for(int i=0;i<target.size();i++){
            need[target[i]]++;
        }
        int res=INT_MAX;
        for(auto it:need){
            auto fizz=mp.find(it.first);
            if(fizz==mp.end()) return 0;
            res=min(res,(fizz->second)/it.second);
            
        }
        return res;
    }
};