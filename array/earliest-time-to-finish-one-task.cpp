class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int min_time=INT_MAX;
        for(auto it:tasks){
            int s=it[0];
            int t=it[1];
            min_time=min(min_time,s+t);
        }
        return min_time;
    }
};