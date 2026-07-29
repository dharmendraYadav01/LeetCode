class Solution {
public:
    int hammingDistance(int x, int y) {
        string str1="";
        while(x>0){
            str1+=to_string(x%2);
            x/=2;
        }
        string str2="";
        while(y>0){
            str2+=to_string(y%2);
            y/=2;
        }
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        // cout<<str1<<" "<<str2;
        int count=0;
        int i=str1.size()-1;
        int j=str2.size()-1;
        while(i>=0 && j>=0){
            if(str1[i]!=str2[j]) count++;
            // cout<<i<<" "<<j<<" ";
            i--;j--;
        }
        // cout<<i<<" "<<j<<" ";
        while(i>=0){
            if(str1[i]=='1') count++;
            i--;
        }
        while(j>=0){
            if(str2[j]=='1') count++;
            j--;
        }
        return count;
    }
};