class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        queue<pair<int, int>> q;
        vector<bool> vis(n, false);
        q.push({start, arr[start]});
        vis[start] = true;
        while (!q.empty()) {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if (val == 0)
                return true;
            if ((idx + val) < n && (idx + val) >= 0 && vis[idx + val] == false) {
                q.push({(idx + val), arr[idx + val]});
                vis[idx + val] = true;
            }
            if ((idx - val) < n && (idx - val) >= 0 && vis[idx - val] == false) {
                q.push({(idx - val), arr[idx - val]});
                vis[idx - val] = true;
            }
        }
        return false;
    }
};