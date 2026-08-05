class Solution {
public:
    void dfs(int k, vector<int>& visit, vector<vector<int>>& adj) {
        visit[k] = 1;
        for (int node : adj[k]) {
            if (!visit[node]){
                dfs(node, visit, adj);
            }
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
        for(auto& it:invocations){
            int u=it[0];
            int v=it[1];
            if(!visit[u] && visit[v]){
                visit[v]=0;
            }
            if(visit[u] && !visit[v]){
                visit[u]=0;
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