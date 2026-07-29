class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        vector<vector<string>>ans;
        for(auto it:responses){
            set<string>s;
            vector<string>result;
            for(auto i:it){
                if(s.find(i)==s.end()){
                    result.push_back(i);
                    s.insert(i);
                }
            }
            ans.push_back(result);
        }
        unordered_map<string,int>mp;
        int maxfreq=0;
        for(auto it:ans){
            for(auto i:it){
                mp[i]++;
                maxfreq=max(maxfreq,mp[i]);
            }
        }

        // cout<<maxfreq;
        vector<string>help;
        for(auto it:mp){
            if(it.second==maxfreq){
                help.push_back(it.first);
            }
        }
        if(help.size()==1){
            return help[0];
        }
        sort(help.begin(),help.end(),[&](auto a,auto b){
            if(a[0]==b[0]) return a<b;
            return a[0]<b[0];
        });
        // for(auto it:help){
        //     cout<<it<<" ";
        // }

        return help[0];
    }
};

/*
good ok 
ok bad good 
good 
bad 
*/