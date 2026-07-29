class Solution {
public:
    // first use recurrsion then memorization
    vector<int> memo; //dp part
    int solve(vector<int>& arr, int curr, int d) {
        int n = arr.size();
        int cnt = 1;
        
        if (memo[curr] != -1) // dp part
            return memo[curr];
        // for left
        for (int j = curr - 1; j >= max(0, curr - d); j--) {
            if (arr[j] >= arr[curr])
                break;
            cnt = max(cnt, 1 + solve(arr, j, d));
        }
        // for right
        for (int j = curr + 1; j <= min(n - 1, curr + d); j++) {
            if (arr[j] >= arr[curr])
                break;
            cnt = max(cnt, 1 + solve(arr, j, d));
        }
        return memo[curr] = cnt; //dp part
    }
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();
        memo.resize(n + 1, -1); //dp part
        int result = 0;
        for (int i = 0; i < arr.size(); i++) {
            result = max(result, solve(arr, i, d));
        }
        return result;
    }
};