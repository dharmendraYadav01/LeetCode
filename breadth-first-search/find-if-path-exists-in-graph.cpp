class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> visited(n, 0);
        unordered_map<int, vector<int>> adj;

        for (auto& e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        while (!q.empty()) {
            int node=q.front();
            q.pop();
            if(node==destination){
                return true;
            }
            else{
                for(auto it:adj[node]){
                    if(visited[it]!=1) {
                        visited[it]=1;
                        q.push(it);
                    }

                }
            }
        }
        return false;
    }
};