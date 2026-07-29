class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()!=2){
            string res="";
            for(int i=0;i<s.length()-1;i++){
                // cout<<s[i]-'0'<<" "<<s[i+1]-'0'<<endl;
                int sum=((s[i]-'0')+(s[i+1]-'0'))%10;
                // cout<<sum<<endl;
                res+=to_string(sum);
            }
            // cout<<res<<endl;
            s=res;
        }
        return s[0]==s[1]?true:false;
    }
};