class Solution {
public:
    bool dfs(int node, vector<int>& vis, vector<int>& pathVis, vector<vector<int>>& adj) {
        vis[node] = 1;
        pathVis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (dfs(it, vis, pathVis, adj))
                    return true;
            } else if (pathVis[it])
                return true;
        }
        pathVis[node] = 0; // if cycle is not detect then go back and mark the node not pathVisited
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,0);
        vector<int>pathVis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,pathVis,graph);
            }
        }
        vector<int>safe;
        for(int i=0;i<n;i++){
            if(pathVis[i]==0) safe.push_back(i);
        }
        return safe;

    }
};