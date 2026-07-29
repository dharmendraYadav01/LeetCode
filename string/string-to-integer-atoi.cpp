class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            sign=(s[i]=='-')?-1:1;
            i++;
        }
        long result=0;

        while(i<n && s[i]>='0' && s[i]<='9'){
            result=result*10+(s[i]-'0');
            if((result*sign)>INT_MAX) return INT_MAX; // here we cheak overflow
            if((result*sign)<INT_MIN) return INT_MIN; // here we cheak underflow
            i++;
        }
        
        return (result*sign);

    }
};