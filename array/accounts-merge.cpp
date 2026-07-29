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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string, int> mail;
        int n = accounts.size();
        DisjointSet ds(n);
        // map mail to index pos
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {
                string ml = accounts[i][j];
                if (!mail.count(ml)) {
                    mail[ml] = i; // agar mail map main nhi toh daal do
                } else {
                    // agar hai toh curr mail ke index pos ko map kr do
                    // jo already present hai map me uske index se.
                    ds.UnionBySize(mail[accounts[i][j]],i); 
                }
            }
        }
        // finally mail kesse index se belong kr rha hai
        vector<vector<string>> blg(n);
        for (auto& i : mail) {
            int ult_p = ds.findUPar(i.second);
            blg[ult_p].push_back(i.first);
        }
        vector<vector<string>> ans;
        for (int i = 0; i < n; i++) {
            if (blg[i].size() == 0)
                continue; // agar koi mail hoyi na
            // or agar mail hai then,
            sort(blg[i].begin(), blg[i].end()); // sort mail
            vector<string> temp;
            temp.push_back(accounts[i][0]); // user name
            for (string s : blg[i]) {
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};