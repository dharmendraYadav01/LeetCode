class Solution {
public:
    int find(int n) {
        for (int i = n; ; i++) {
            if ((i & i - 1) == 0)
                return i;
        }
        return -1;
    }
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;
        // next nearest 2 ka power of that nums
        return find(n + 1);
    }
};