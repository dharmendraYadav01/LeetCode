class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,  int k) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& f : flights) {
            int u = f[0];
            int v = f[1];
            int w = f[2];
            adj[u].push_back({v, w});
        }
        vector<int> dist(n, INT_MAX);
        queue<pair<int, pair<int, int>>> pq;
        dist[src] = 0;
        pq.push({0, {src, 0}});
        while (!pq.empty()) {
            int stop = pq.front().first;
            int node = pq.front().second.first;
            int d = pq.front().second.second;
            pq.pop();
            // stop(maximum stop to reach dst)---->k+1 
            // if (stop == k + 1 && node == dst)
            //     return d;
            for (auto& n : adj[node]) {
                int curr_node = n.first;
                int curr_dist = n.second;
                if (curr_dist + d < dist[curr_node] && stop<=k) {
                    dist[curr_node] = curr_dist + d;
                    pq.push({stop + 1, {curr_node, dist[curr_node]}});
                }
            }
        }
        if(dist[dst]==INT_MAX) return -1;
        return dist[dst];
    }
};