class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int n = events.size();
        vector<int>suf(n + 1);

        int ans = 0;
        for(int i = n - 1; ~i ;i--)
            suf[i] =  max(events[i][2], suf[i + 1]);

        for(int i = 0; i < n ;i++){
            int id = upper_bound(events.begin(), events.end(), vector<int>{events[i][1], (int)2e9, (int)2e9}) - events.begin();

            ans=max(ans, events[i][2]);
            if(id != n)
                ans = max(ans, events[i][2] + suf[id]);
        }
        return ans;
    }
};