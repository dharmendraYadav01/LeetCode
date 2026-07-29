class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }
        int b=0,a=0,ll=0,oo=0,n=0;
        auto it=mp.find('b');
        if(it!=mp.end()) b=it->second;
        
        it=mp.find('a');
        if(it!=mp.end()) a=it->second;

        it=mp.find('l');
        if(it!=mp.end()) ll=it->second;
        
        it=mp.find('o');
        if(it!=mp.end()) oo=it->second;
        
        it=mp.find('n');
        if(it!=mp.end()) n=it->second;

        int res=INT_MAX;
        res=min(res,b);
        res=min(res,a);
        res=min(res,ll/2);
        res=min(res,oo/2);
        res=min(res,n);
        return res;
    }
};