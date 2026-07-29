class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto it : roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        vector<int> ways(n, 0);
        vector<long long> dis(n, LLONG_MAX);
        priority_queue<pair<long long, int>, vector<pair<long long, int>>,greater<pair<long long, int>>>pq;
        pq.push({0, 0});
        ways[0] = 1;
        dis[0] = 0;
        int mod = 1e9 + 7;
        while (!pq.empty()) {
            long long d = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for (auto it : adj[node]) {
                int new_node = it.first;
                int new_d = it.second;
                if (dis[new_node] > new_d + d) {
                    dis[new_node] = new_d + d;
                    pq.push({new_d + d, new_node});
                    ways[new_node] = ways[node];
                } else if (new_d + d == dis[new_node]) {
                    ways[new_node] = (ways[new_node] + ways[node]) % mod;
                }
            }
        }
        return ways[n - 1];
    }
};