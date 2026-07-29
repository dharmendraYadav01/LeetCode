class Solution {
public:
    int time(vector<int>& s1, vector<int>& d1, vector<int>& s2,vector<int>& d2) {
        int finish = INT_MAX;
        for (int i = 0; i < s1.size(); i++) {
            finish = min(finish, s1[i] + d1[i]);
        }
        int ans = INT_MAX;
        for (int i = 0; i < s2.size(); i++) {
            ans = min(ans,max(finish, s2[i]) + d2[i]);
        }
        return ans;
    }
    int earliestFinishTime(vector<int>& landStartTime,vector<int>& landDuration,
        vector<int>& waterStartTime,vector<int>& waterDuration) {
        int land =
            time(landStartTime, landDuration, waterStartTime, waterDuration);

        int water =
            time(waterStartTime, waterDuration, landStartTime, landDuration);
        return min(land, water);
    }
};