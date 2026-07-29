class Solution {
public:
    int reverseBits(int n) {
        vector<int> rb;
        while (n > 0) {
            rb.push_back(n % 2);
            n /= 2;
        }
        for (int i = rb.size(); i < 32; i++) {
            rb.push_back(0);
        }
        int dig = 0;
        int j = 0;
        for (int i = 31; i >= 0; i--) {
            if (rb[i] == 1)
                dig += pow(2, j);
            j++;
        }
        return dig;
    }
};