class Solution {
public:
    int time=1;
    void dfs(int node,int parent,int tin[],int low[],vector<int>&vis,vector<vector<int>>& adj,vector<vector<int>>& bridges){
        vis[node]=1;
        tin[node]=time;
        low[node]=time;
        time++;
        for(auto ad:adj[node]){
            if(ad==parent) continue;
            if(vis[ad]==0){
                dfs(ad,node,tin,low,vis,adj,bridges);
                low[node]=min(low[node],low[ad]);
                // now if we remove edges between node and its adj to check it is bridges
                if(low[ad]>tin[node]){
                    bridges.push_back({ad,node});
                }
            }else{
                low[node]=min(low[node],low[ad]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        // step 1: adj list
        vector<vector<int>> adj(n);
        for (auto& it : connections) {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        int tin[n]; // dfs time of insertion
        int low[n]; // min. lowest time insertion of all adj node apart from parent
        vector<vector<int>>bridges;
        dfs(0,-1,tin,low,vis,adj,bridges);
        return bridges;
    }
};