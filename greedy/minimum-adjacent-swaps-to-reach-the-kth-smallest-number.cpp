class Solution {
public:
    int getMinSwaps(string num, int k) {
        int swp = 0;
        string target = num;
        while (k--) {
            next_permutation(target.begin(), target.end());
        }
        for (int i = 0; i < num.length(); i++) {
            if (num[i] == target[i])
                continue;
            int j = i;
            while (num[i] != target[j])
                j++;
            while (j > i) {
                swap(target[j], target[j - 1]);
                j--;
                swp++;
            }
        }
        return swp;
    }
};