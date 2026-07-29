class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>v;
        map<char,int>c;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                v[s[i]]++;
            }else{
                c[s[i]]++;
            }
        }
        int sum_v=0;
        for(auto it:v){
            if(it.second>sum_v){
                sum_v=it.second;
            }
        }
        int sum_c=0;
        for(auto it:c){
            if(it.second>sum_c){
                sum_c=it.second;
            }
        }
        return sum_v+sum_c;
    }
};