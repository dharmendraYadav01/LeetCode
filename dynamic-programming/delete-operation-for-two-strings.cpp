class Solution {
public:
    int helper(int m,int n,string& word1,string& word2,vector<vector<int>>&vec){
        if(m==0) return n;
        if(n==0) return m;
        if(vec[m][n]!=-1) return vec[m][n];
        if(word1[m-1]==word2[n-1]) return vec[m][n]=helper(m-1,n-1,word1,word2,vec);
        else{
            return vec[m][n]= 1+min(helper(m,n-1,word1,word2,vec),helper(m-1,n,word1,word2,vec));
        }
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>>vec(m+1,vector<int>(n+1,-1));
        return helper(m,n,word1,word2,vec);
    }
};