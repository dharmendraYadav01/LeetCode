class Solution {
public:
    int sum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        vector<int> result;
        for (int it : nums) {
            result.push_back(sum(it));
        }
        sort(result.begin(), result.end());
        return result[0];
    }
};