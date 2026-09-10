class DisjointSet {
    vector<int> parent, rank, size;

public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
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
public:
    int removeStones(vector<vector<int>>& stones) {
        int len = stones.size();
        int m = 0;
        int n = 0;
        // find dimension of coordinate points or matrix of stones
        for (auto& i : stones) {
            m = max(m, i[0]);
            n = max(n, i[1]);
        }
        DisjointSet ds(m + n + 1);
        // store the stones that we cover 
        unordered_map<int, int> stoneNode;
        for (auto& it : stones) {
            int row = it[0];
            int col = it[1] + m + 1;
            ds.UnionBySize(row, col); // connect the stones in same col and same row
            stoneNode[row] = 1;
            stoneNode[col] = 1;
        }
        int cnt = 0;
        for (auto& it : stoneNode) {
            if (ds.findUPar(it.first) == it.first) { // find no. of components
                cnt++;
            }
        }
        return len - cnt; // return no. of stones - no. of components
    }
};