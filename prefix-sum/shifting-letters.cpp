class Solution {
public:
    // int Sum(int idx,vector<int>&result){
    //     long sum=0;
    //     for(int i=idx;i<result.size();i++){
    //         sum+=result[i];
    //     }
    //     return sum%26;
    // }
    string shiftingLetters(string s, vector<int>& shifts) {
        string ans=s;
        int n=shifts.size()-1;
        long long total=0;
        for(int i=n;i>=0;i--){
            total=(total+shifts[i])%26;
            ans[i]= 'a' + ( (s[i] - 'a' + total) % 26 );
            
            // int j=i;
            // char res=s[i];
            // while(j<shifts.size()){
            //     res = 'a' + ( (res - 'a' + shifts[j]) % 26 );
            //     // res=char(s[i]+shifts[j]);
            //     j++;
            // }
            // ans+=res;
        }
        return ans;
    }
};