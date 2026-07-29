class Solution {
public:
    int vertex = 0;
    int edge = 0;

    void dfs(int num, vector<vector<int>>& adj, vector<int>& visit) {
        visit[num] = 1;
        vertex++;
        edge += adj[num].size();
        for (auto& it : adj[num]) {
            if (!visit[it]) {
                dfs(it, adj, visit);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> visit(n, 0);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
                vertex = 0;
                edge = 0;
                dfs(i, adj, visit);
                if (edge == vertex * (vertex - 1))
                    ans++;
            }
        }
        return ans;
    }
};