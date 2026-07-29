class Solution {
public:
    int find_reverse(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + (n % 10);
            n /= 10;
        }
        return r;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        map<int, int> mp;
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int rev = find_reverse(nums[i]);
            if (mp.count(nums[i])) {
                mini = min(mini, abs(mp[nums[i]] - i));
            }
            mp[rev] = i;
        }
        return mini == INT_MAX ? -1 : mini;
    }
};