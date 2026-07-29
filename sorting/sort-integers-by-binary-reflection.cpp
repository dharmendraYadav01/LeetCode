class Solution {
public:
    int convert(int n) {
        string s = "";
        while (n > 0) {
            s += to_string(n % 2);
            n /= 2;
        }
        int base = 1;
        int dec = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                dec += base;
            }
            base *= 2;
        }
        return dec;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int, int>> vec;
        for (int it : nums) {
            vec.push_back({it, convert(it)});
        }

        sort(vec.begin(), vec.end(), [&](auto a, auto b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });
        vector<int> ans;
        for (auto it : vec) {
            ans.push_back(it.first);
        }
        return ans;
    }
};
