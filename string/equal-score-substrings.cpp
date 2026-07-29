class Solution {
public:
    bool scoreBalance(string s) {
        int i=0;
        while(i<s.length()){
            int sum1=0;
            int sum2=0;
            for(int k=0;k<i+1;k++){
                sum1+=(s[k]-'a'+1);
            }
            for(int k=i+1;k<s.length();k++){
                sum2+=(s[k]-'a'+1);
            }
            if(sum1==sum2) return true;
            i++;
        }
        return false;
        //abdcd
    }
};