class DisjointSet {
    // vector<int> parent, rank, size; // private
public:
    vector<int> parent, rank, size; // public
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }
    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void UnionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        } else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void UnionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution {
private:
    bool isValid(int adjr, int adjc, int n) {
        return adjr >= 0 && adjr < n && adjc >= 0 && adjc < n;
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DisjointSet ds(n * n);
        int dir_r[] = {-1, 0, 1, 0};
        int dir_c[] = {0, 1, 0, -1};
        // s1: Just connect all 1's in grid to their Ultimate parent
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (grid[row][col] == 0)
                    continue;
                for (int i = 0; i < 4; i++) {
                    int adjr = row + dir_r[i];
                    int adjc = col + dir_c[i];
                    if (isValid(adjr, adjc, n) && grid[adjr][adjc] == 1) {
                        int currNode_no = row * n + col;
                        int adjNode_no = adjr * n + adjc;
                        if (ds.findUPar(currNode_no) != ds.findUPar(adjNode_no)) {
                            ds.UnionBySize(currNode_no, adjNode_no);
                        }
                    }
                }
            }
        }
        // s2: One by One convert all 0's ---> 1's then check for largest component
        int mx = 0;
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (grid[row][col] == 1)
                    continue;
                grid[row][col] = 1; // set 0 --> 1
                unordered_set<int> st; // becoz 4 dir give wrong answer in some cases so in set we put ultimate parent of that curr node
                for (int i = 0; i < 4; i++) {
                    int adjr = row + dir_r[i];
                    int adjc = col + dir_c[i];
                    if (isValid(adjr, adjc, n) && grid[adjr][adjc] == 1) {
                        st.insert(ds.findUPar(adjr * n + adjc));
                    }
                }
                int totalsize = 1;
                for (auto& it : st) {
                    totalsize += ds.size[it];
                }
                mx = max(mx, totalsize);
                grid[row][col] = 0; // convert 1 --> 0
            }
        }
        // if in grid all node are 1's no 0's
        for (int cell = 0; cell < n * n; cell++) {
            mx = max(mx, ds.size[ds.findUPar(cell)]);
        }
        return mx;
    }
};