class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }
        queue<pair<int, int>> q;
        vector<bool> vis(n, false);
        q.push({0, 0});
        vis[0] = true;
        while (!q.empty()) {
            int idx = q.front().first;
            int dis = q.front().second;
            q.pop();
            if (idx == n - 1)
                return dis;
            if (idx + 1 < n && vis[idx + 1] == false) {
                q.push({idx + 1, dis + 1});
                vis[idx + 1] = true;
            }
            if (idx - 1 >= 0 && vis[idx - 1] == false) {
                q.push({idx - 1, dis + 1});
                vis[idx - 1] = true;
            }
            for(auto it:mp[arr[idx]]){
                if(!vis[it]){
                    q.push({it,dis+1});
                    vis[it]=true;
                }
            }
            mp[arr[idx]].clear();
        }
        return 0;
    }
};