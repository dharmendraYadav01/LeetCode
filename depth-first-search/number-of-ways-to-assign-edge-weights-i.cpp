class Solution {
public:
    int mod = 1e9 + 7;
    // Binary exponential for 1e9+7(indirect method)
    long long power(long long base, long long expo) {
        if (expo == 0)
            return 1;
        long long half = power(base, expo / 2);
        long long result = (half * half) % mod;
        if (expo % 2 == 1) {
            result = (result * base) % mod;
        }
        return result;
    }
    int getdepth(unordered_map<int, vector<int>>& adj, int root, int parent) {
        int max_depth = 0;
        for (int nbr : adj[root]) {
            if (nbr == parent)
                continue;
            max_depth = max(max_depth, getdepth(adj, nbr, root) + 1);
        }
        return max_depth;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int mx_depth = getdepth(adj, 1, -1);
        return power(2, mx_depth - 1);
    }
};