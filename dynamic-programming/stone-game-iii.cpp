class Solution {
public:
    int dp[1001];
    int solve(vector<int>& stoneValue, int i) {
        int ans = INT_MIN;
        int n = stoneValue.size();
        if (i >= n)
            return 0;
        if(dp[i]!=-1) return dp[i];
        ans = max(ans, stoneValue[i] - solve(stoneValue, i + 1));
        if (i + 1 < n)
            ans = max(ans, stoneValue[i] + stoneValue[i + 1] - solve(stoneValue, i + 2));
        if (i + 2 < n)
            ans = max(ans, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - solve(stoneValue, i + 3));
        return dp[i]=ans;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        memset(dp,-1,sizeof(dp));
        int diff = solve(stoneValue, 0);
        if (diff > 0)
            return "Alice";
        else if (diff < 0)
            return "Bob";
        return "Tie";
    }
};