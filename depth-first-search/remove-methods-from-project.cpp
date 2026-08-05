class Solution {
public:
    void find(int i, vector<int>& visit, vector<vector<int>>& adj) {
        visit[i] = 0;
        for (int node : adj[i]) {
            if (visit[node] == 1) {
                find(node, visit, adj);
            }
        }
    }
    void dfs(int k, vector<int>& visit, vector<vector<int>>& adj) {
        visit[k] = 1;
        for (int node : adj[k]) {
            if (!visit[node])
                dfs(node, visit, adj);
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for (auto& i : invocations) {
            adj[i[0]].push_back(i[1]);
        }
        vector<int> visit(n, 0);
        vector<int> ans;
        dfs(k, visit, adj);
        for (int i = 0; i < visit.size(); i++) {
            if (!visit[i] && i != k) {
                find(i, visit, adj);
            }
        }
        for (int i = 0; i < visit.size(); i++) {
            if (visit[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};