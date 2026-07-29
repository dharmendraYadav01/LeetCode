class Solution {
public:
    int maxOperations(string s) {
        int i=0;
        int count=0;
        int ans=0;
        while(i<s.length()){
            if(s[i]=='1'){
                count++;
                i++;
            }else{
                ans+=count;
                while(i<s.length() && s[i]=='0') i++;
            }
        }
        return ans;
    }
};