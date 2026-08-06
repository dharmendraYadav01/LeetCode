class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto e : prerequisites) {
            adj[e[1]].push_back(e[0]);
        }
        vector<int> indegre(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            for (auto it : adj[i]) {
                indegre[it]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < indegre.size(); i++) {
            if (indegre[i] == 0) {
                q.push(i);
            }
        }
        // vector<int>res;
        int cnt = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            // res.push_back(node);
            cnt++;
            for (auto it : adj[node]) {
                indegre[it]--;
                if (indegre[it] == 0)
                    q.push(it);
            }
        }
        // return res.size()==numCourses?true:false;
        return cnt == numCourses ? true : false;
    }
};