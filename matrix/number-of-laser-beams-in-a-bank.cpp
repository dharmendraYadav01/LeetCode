class Solution {
public:
    void fill(vector<int>& result, string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                count++;
            }
        }
        result.push_back(count);
    }
    int numberOfBeams(vector<string>& bank) {
        vector<int> result;
        for (auto it : bank) {
            fill(result, it);
        }
        int sum = 0;
        int prev = 0;
        for (int i = 0; i < result.size(); i++) {
            if (result[i] != 0) {
                sum += prev * result[i];
                prev = result[i];
            }
        }

        return sum;
    }
};