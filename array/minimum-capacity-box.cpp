class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        vector<pair<int, int>> vec;
        for (int i = 0; i < capacity.size(); i++) {
            vec.push_back({capacity[i], i});
        }
        sort(vec.begin(), vec.end());
        for (auto v : vec) {
            if (v.first >= itemSize) {
                return v.second;
            }
        }
        return -1;
    }
};