class Solution {
public:
    int ans = -1;
    void dfs(int node, vector<int>& vis, vector<int>& pathVis, vector<int>& edges, vector<int>& len, int step) {
        vis[node] = 1;
        pathVis[node] = 1;
        len[node] = step;
        int it = edges[node];
        if (it != -1 && !vis[it]) {
            dfs(it, vis, pathVis, edges, len, step + 1);
        } else if (it != -1 && pathVis[it]) {
            ans = max(ans, step - len[it] + 1);
        }
        pathVis[node] = 0;
    }
    int longestCycle(vector<int>& edges) {
        int E = edges.size();
        vector<int> vis(E, 0);
        vector<int> pathVis(E, 0);
        vector<int> length(E, 0);

        for (int i = 0; i < E; i++) {
            if (!vis[i]) {
                dfs(i, vis, pathVis, edges, length, 0);
            }
        }
        return ans;
    }
};