class Solution {
public:
    string convert(int n){
        string s="";
        while(n>0){
            s+=to_string(n%2);
            n/=2;
        }
        return s;
    }
    int minimumFlips(int n) {
        string s=convert(n);
        string rev=s;

        reverse(s.begin(),s.end());

        int i=0;
        int j=0;
        int count=0;
        while(i<s.length() && j<rev.length()){
            if(s[i]!=rev[j]){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};