class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());
        vector<int> temp;
        for (auto it : st) {
            temp.push_back(it);
        }
        unordered_map<int, int> mp;
        int n = arr.size();
        sort(temp.begin(), temp.end());
        for (int i = 0; i < temp.size(); i++) {
            mp[temp[i]] = i + 1;
        }
        vector<int> ans(n, 0);
        for (int i = 0; i < arr.size(); i++) {
            ans[i] = mp[arr[i]];
        }
        return ans;
    }
};