class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        int mindiff = abs(arr[0] - arr[1]);
        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) < mindiff) {
                mindiff = abs(arr[i] - arr[i - 1]);
            }
        }
        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) == mindiff) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }
        // cout<<mindiff;
        return result;
    }
};
