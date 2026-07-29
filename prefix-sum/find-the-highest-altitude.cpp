class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int mx_alt = 0;
        for (int i = 0; i < gain.size(); i++) {
            sum += gain[i];
            mx_alt = max(mx_alt, sum);
        }
        return mx_alt;
    }
};