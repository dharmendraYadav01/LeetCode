class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,vector<int>& landDuration,
        vector<int>& waterStartTime,vector<int>& waterDuration) {

        // land ride---->water ride
        int land_sum = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            int sum = landStartTime[i] + landDuration[i];
            for (int j = 0; j < waterDuration.size(); j++) {
                int water_f = max(sum, waterStartTime[j]) + waterDuration[j]; // if at that moment water ride do not start
                land_sum = min(land_sum, water_f);
            }
        }
        // water ride---->land ride
        int water_sum = INT_MAX;
        for (int i = 0; i < waterStartTime.size(); i++) {
            int sum = waterStartTime[i] + waterDuration[i];
            for (int j = 0; j < landDuration.size(); j++) {
                int land_f = max(sum, landStartTime[j]) + landDuration[j]; //// if at that moment land ride do not start
                water_sum = min(water_sum, land_f);
            }
        }
        return min(land_sum, water_sum);
    }
};