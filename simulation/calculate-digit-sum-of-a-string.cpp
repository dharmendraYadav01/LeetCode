class Solution {
public:
    string find_sum(string &s,int k){
        int i=0;
        string ans="";
        while(i<s.length()){
            int sum=0;
            int j=i;
            while(j<i+k && j<s.length()){
                sum+=s[j]-'0';
                j++;
            }
            i=j;
            ans+=to_string(sum);
        }
        return ans;
    }
    string digitSum(string s, int k) {
        while(s.length()>k){
            s=find_sum(s,k);
        }
        return s;
    }
};