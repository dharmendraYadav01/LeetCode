class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>mp;
        string res="";
        for(auto &it:s){
            mp[it]++;
            // maxfre=max(maxfre,mp[it]); 
        }
        vector<pair<char,int>>vmp;
        for(auto i:mp){
            vmp.push_back({i.first,i.second});
        }
        sort(vmp.begin(),vmp.end(),[](const pair<char,int>&a,const pair<char,int>&b){
            return a.second>b.second;
        });
        int currMax=vmp[0].second;
        unordered_map<int,vector<char>>freq;
        vector<char>temp;
        int maxSize=0;
        int maxFreq=0;
        for(auto i:vmp){
            if(i.second==currMax){
                temp.push_back(i.first);
            }else{
                freq[currMax]=temp;
                int size=temp.size();
                maxSize=max(maxSize,size);
                maxFreq=max(maxFreq,currMax);
                currMax=i.second;
                temp.clear();
                temp.push_back(i.first);
            }
        }
        freq[currMax]=temp;
        int size=temp.size();
        maxSize=max(maxSize,size);
        vector<pair<int,vector<char>>>distinct;
        for(auto i:freq){
            distinct.push_back({i.first,i.second});
        }
        sort(distinct.begin(),distinct.end(),[](const pair<int,vector<char>>&a,const pair<int,vector<char>>&b){
            return a.first>b.first;
        });
        for(auto i:distinct){
            if(i.second.size()==maxSize && i.first==maxFreq){
                for(auto ch:i.second){
                    res+=ch;
                }
                break;
            }else if(i.second.size()==maxSize && i.first!=maxFreq){
                for(auto ch:i.second){
                    res+=ch;
                }
                break;
            }
        }
        return res;
    }
};