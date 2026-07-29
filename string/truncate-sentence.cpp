class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string>result;
        for(int i=0;i<s.length();){
            int j=i;
            string res="";
            while(j<s.length() && s[j]!=' '){
                res+=s[j];
                j++;
            }
            i=j+1;
            result.push_back(res);
        }
        string ans="";
        for(int i=0;i<k;i++){
            ans+=result[i];
            if(i!=k-1){
                ans+=" ";
            }
        }
        return ans;
    }
};