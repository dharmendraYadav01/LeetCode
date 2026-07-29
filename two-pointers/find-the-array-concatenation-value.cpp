class Solution {
public:
    int concatenate(int a, int b) {
        string s = to_string(a) + to_string(b);
        return stoi(s);
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        long long sum = 0;
        while (i < j) {
            sum += concatenate(nums[i], nums[j]);
            i++;
            j--;
        }
        if (i == j) {
            sum += stoi(to_string(nums[i]));
        }
        return sum;
    }
};