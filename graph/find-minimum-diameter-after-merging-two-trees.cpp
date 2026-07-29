class Solution {
public:
    // Helper function to perform BFS (Breadth-First Search)
    // This function returns a pair containing:
    // - The farthest node from the source node
    // - The distance to the farthest node

    
    pair<int, int> BFS(unordered_map<int, vector<int>>& adj, int source) {
        queue<int> que; // Queue to manage the BFS traversal
        que.push(source); // Start BFS from the source node

        unordered_map<int, bool> visited; // Map to keep track of visited nodes
        visited[source] = true; // Mark the source node as visited

        int distance = 0; // Distance from the source node
        int farthestNode = source; // Variable to store the farthest node

        // Perform BFS until all nodes are visited
        while(!que.empty()) {
            int size = que.size(); // Number of nodes in the current level

            // Process all nodes in the current level
            while(size--) {
                int curr = que.front(); // Get the front node in the queue
                que.pop(); // Remove the processed node from the queue

                farthestNode = curr; // Update the farthest node (last visited in the level)

                // Explore all neighbors of the current node
                for(auto &neighbour : adj[curr]) {
                    if(visited[neighbour] == false) { // If the neighbor is not visited
                        visited[neighbour] = true; // Mark it as visited
                        que.push(neighbour); // Push it into the queue for BFS
                    }
                }
            }

            // If there are nodes remaining in the queue, increment the distance
            if(!que.empty()) {
                distance++;
            }
        }

        // Return the farthest node and its distance from the source
        return {farthestNode, distance};
    }



    // Function to find the diameter of a tree
    int findDiameter(unordered_map<int, vector<int>> adj) {
        // Step 1: Find the farthest node from an arbitrary starting node (0)
        auto [farthestNode, dist] = BFS(adj, 0);

        // Step 2: Use the farthest node found above as the new starting point
        // The farthest node from this point will be the other end of the tree's diameter
        auto [otherEndNode, diameter] = BFS(adj, farthestNode);

        // Return the diameter of the tree
        return diameter;
    }



    // Function to build an adjacency list from the given edge list
    unordered_map<int, vector<int>> buildAdj(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj; // Adjacency list to represent the tree

        // Iterate over each edge to populate the adjacency list
        for(auto &edge : edges) {
            int u = edge[0]; // First node of the edge
            int v = edge[1]; // Second node of the edge
            adj[u].push_back(v); // Add v to the adjacency list of u
            adj[v].push_back(u); // Add u to the adjacency list of v (undirected graph)
        }

        // Return the constructed adjacency list
        return adj;
    }




    // Function to find the minimum diameter after merging two trees
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        // Build adjacency lists for both trees from their edge lists
        unordered_map<int, vector<int>> adj1 = buildAdj(edges1);
        unordered_map<int, vector<int>> adj2 = buildAdj(edges2);

        // Calculate the diameter of the first tree
        int d1 = findDiameter(adj1);
        // Calculate the diameter of the second tree
        int d2 = findDiameter(adj2);

        // Calculate the combined diameter after merging the two trees
        // (d1+1)/2 represents the radius of tree 1
        // (d2+1)/2 represents the radius of tree 2
        // Adding 1 accounts for the connection between the two trees
        int combined = (d1+1)/2 + (d2+1)/2 + 1;

        // Return the maximum of the individual diameters and the combined diameter
        return max({d1, d2, combined});
    }
};