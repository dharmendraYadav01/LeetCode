class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [&](auto a, auto b) {
            if (a[0] == b[0])
                return a[1] < b[1];
            return a[0] < b[0];
        });
        priority_queue<int, vector<int>, greater<int>> q;

        for (auto it : intervals) {
            if (!q.empty() && it[0] > q.top()) {
                q.pop();
            }
            q.push(it[1]);
        }
        return q.size();
    }
};