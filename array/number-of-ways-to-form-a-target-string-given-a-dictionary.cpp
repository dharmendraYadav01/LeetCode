class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int M=words.size(); 
        int N=words[0].size(); 
        int T=target.size();
        vector<vector<int>>freq(N,vector<int>(26,0));
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                freq[j][words[i][j]-'a']++;
            }
        }
        vector<vector<long long>>result(N+1,vector<long long>(T+1));
        int MOD=1e9+7;
        for(int i=0;i<T;i++){
            result[N][i]=0;
        }
        for(int i=0;i<=N;i++){
            result[i][T]=1;
        }
        for(int c = N-1; c >= 0; c--) {
            for(int t = T-1; t >= 0; t--) {
                result[c][t] = (result[c+1][t] + (freq[c][target[t]-'a'] * result[c+1][t+1]) % MOD) % MOD;
            }
        }        
        return result[0][0];
    }
};