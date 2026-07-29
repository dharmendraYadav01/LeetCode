class Solution {
public:
    int lcs(int m,int n,string& text1,string& text2,vector<vector<int>>&memo){
        //base case
        if(m==0 || n==0) return 0;
        if (memo[m][n] != -1) return memo[m][n];

        if(text1[m-1]==text2[n-1]) return memo[m][n] = 1+lcs(m-1,n-1,text1,text2,memo);
        return memo[m][n]=max(lcs(m,n-1,text1,text2,memo),lcs(m-1,n,text1,text2,memo));

    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>memo(m+1,vector<int>(n+1,-1));
        return lcs(m,n,text1,text2,memo);
    }
};