class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int i = 0, j = piles.size() - 1;
        int b = 0, y = 0, a = 0;
        while (i < j) {
            b += piles[i++];
            a += piles[j--];
            y += piles[j--];
        }
        return y;
    }
};