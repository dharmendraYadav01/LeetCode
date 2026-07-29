class Solution {
public:
    string largestGoodInteger(string num) {
        int size=num.length();
        string flop="";
        for(int i=0;i<=size-3;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string res=num.substr(i,3);
                if(res>flop){
                    flop=res;
                }
            }
        }
        
        return flop;
        // unordered_map<char,int>mp;
        // for(int i=0;i<num.length();i++){
        //     mp[num[i]]-'0';
        // }
        // string res="";
        // for(auto it:mp){
        //     if(it==3){
                
        //     }
        // }
    }
};