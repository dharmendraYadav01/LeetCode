class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, vector<int>>,vector<pair<double, vector<int>>>,greater<pair<double, vector<int>>>>pq;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                double key = (double)arr[i] / arr[j];
                pq.push({key, {arr[i], arr[j]}});
            }
        }
        while (--k) {
            pq.pop();
        }
        return pq.top().second;
    }
};