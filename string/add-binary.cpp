class Solution {
public:
    string addBinary(string a, string b) {
        string binary="";
        int i=a.length()-1;
        int j=b.length()-1;
        int carray=0;
        while(i>=0 || j>=0 || carray){
            int sum=carray;
            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }
            binary=to_string(sum%2)+binary;
            carray=sum/2;
        }
        return binary;
    }
};