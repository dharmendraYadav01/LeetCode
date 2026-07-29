class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum=0;
        // unordered_map<char,int>mp;
        // vector<string>result;
        // string res="";
        // string t="abcdefghijklmnopqrstuvwxyz";
        // for(auto i:t){
        //     mp[i]=((i-'a'));
        // }
        // for(int i=0;i<s.length();i++){
        //     sum+=widths[mp[s[i]]];
        //     res+=s[i];
        //     if(sum==100){
        //         result.push_back(res);
        //         res="";
        //         sum=0;
        //     }
        // }
        // cout<<sum<<endl;
        // for(auto it:result){
        //     cout<<it<<" ";
        // }
        string res="";
        vector<string>result;
        for(int i=0;i<s.length();i++){
            int w=widths[s[i]-'a'];
            if(sum+w>100){
                result.push_back(res);
                res="";
                sum=0;
            }
            sum+=w;
            res+=s[i];
        }
        if(!res.empty()){
            result.push_back(res);
        }
        if(sum>100) sum=widths[widths.size()-1];
        // cout<<sum<<endl;
        // for(auto it:result){
        //     cout<<it<<" ";
        // }
        return {(int)result.size(),sum};
    }
};