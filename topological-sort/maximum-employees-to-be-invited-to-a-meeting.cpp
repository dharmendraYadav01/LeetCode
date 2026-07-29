class Solution {
public:
    // BFS function to calculate the maximum distance from a start node
    int bfs(int startNode, unordered_map<int, vector<int>>& adj, vector<bool>& visitedNodes) {
        queue<pair<int, int>> que;
        que.push({startNode, 0});
        int maxDistance = 0;

        while (!que.empty()) {
            auto [currNode, currDist] = que.front();
            que.pop();

            for (int neighbor : adj[currNode]) {
                if (visitedNodes[neighbor]) continue;
                visitedNodes[neighbor] = true;
                que.push({neighbor, currDist + 1});
                maxDistance = max(maxDistance, currDist + 1);
            }
        }

        return maxDistance;
    }

    int maximumInvitations(vector<int>& favorite) {
        int n = favorite.size();
        unordered_map<int, vector<int>> adj; // Reverse graph representation

        // Build the reverse graph
        for (int i = 0; i < n; ++i) {
            adj[favorite[i]].push_back(i);
        }

        int longestCycleEmpCount = 0, twoCycleEmplCount = 0;
        vector<bool> visited(n, false);

        // Find all cycles and calculate the maximum invitations
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                unordered_map<int, int> mp;
                int currNode = i;
                int distance = 0;

                while (!visited[currNode]) {
                    visited[currNode] = true;
                    mp[currNode] = distance;
                    
                    int next = favorite[currNode];
                    distance += 1;

                    if (mp.count(next)) { // Cycle detected
                        int cycleLength = distance - mp[next];
                        longestCycleEmpCount = max(longestCycleEmpCount, cycleLength);

                        if (cycleLength == 2) {
                            vector<bool> visitedNodes(n, false);
                            visitedNodes[currNode] = visitedNodes[next] = true;
                            twoCycleEmplCount += 2 + bfs(next, adj, visitedNodes) + bfs(currNode, adj, visitedNodes);
                        }
                        break;
                    }
                    currNode = next; //keep moving further and finding cycles
                }
            }
        }

        return max(longestCycleEmpCount, twoCycleEmplCount);
    }
};