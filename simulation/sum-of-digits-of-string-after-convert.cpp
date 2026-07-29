class Solution {
public:
    int find(string s){
        int sum=0;
        for(auto it:s){
            sum+=(it-'0');
        }
        return sum;
    }
    string Convert(string &s){
        string ans="";
        for(auto it:s){
            ans+=to_string(it-'a'+1);
        }
        return ans;
    }
    int getLucky(string s, int k) {
        int sum=0;
        s=Convert(s);
        while(k--){
            sum=find(s);
            s=to_string(sum);
        }
        return sum;
    }
};