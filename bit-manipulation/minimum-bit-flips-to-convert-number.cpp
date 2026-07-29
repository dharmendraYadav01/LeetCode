class Solution {
public:
    int minBitFlips(int start, int goal) {
        string str1="";
        string str2="";
        while(start>0){
            str1+=to_string(start%2);
            start/=2;
        }
        while(goal>0){
            str2+=to_string(goal%2);
            goal/=2;
        }
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        int i=str1.size()-1;
        int j=str2.size()-1;
        int count=0;
        while(i>=0 && j>=0){
            if(str1[i]!=str2[j]) count++;
            i--;
            j--;
        }
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