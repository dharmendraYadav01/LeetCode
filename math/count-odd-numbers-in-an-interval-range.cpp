class Solution {
public:
    int countOdds(int low, int high) {
        // approach 1:---
        //  if (low % 2 == 0 && high % 2 == 0)
        //      return (high - low) / 2;
        //  if (low % 2 != 0 || high % 2 != 0)
        //      return (high - low) / 2 + 1;
        //  return -1;
        // approach 2:--

        auto odd = [&](int x) { return (x + 1) >> 1; };
        return odd(high) - odd(low-1);
    }
};