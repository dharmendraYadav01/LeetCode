class Solution {
public:
    int maxScore(string s) {
        int result=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            // string l="";
            // string r="";
            int one=0;
            int zero=0;
            // l.append(s,0,i+1);
            // r.append(s,i+1,n);
            for(int j=0;j<=i;j++){
                if(s[j]=='0'){
                    zero++;
                }
            }
            for(int j=i+1;j<n;j++){
                if(s[j]=='1'){
                    one++;
                }
            }
            result=max(result,one+zero);
        }
        return result;
    }
};