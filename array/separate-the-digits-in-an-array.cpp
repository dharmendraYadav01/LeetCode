class Solution {
public:
    vector<int> sep(int num) {
        vector<int> rm;
        while (num > 0) {
            rm.push_back(num % 10);
            num /= 10;
        }
        reverse(rm.begin(), rm.end());
        return rm;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int it : nums) {
            auto r = sep(it);
            ans.insert(ans.end(), r.begin(), r.end());
        }

        return ans;
    }
};