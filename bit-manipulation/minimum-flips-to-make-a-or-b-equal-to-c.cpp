class Solution {
public:
    int minFlips(int a, int b, int c) {
        string a1 = "";
        string b1 = "";
        string c1 = "";
        while (a > 0) {
            a1 += to_string(a % 2);
            a /= 2;
        }
        while (b > 0) {
            b1 += to_string(b % 2);
            b /= 2;
        }
        while (c > 0) {
            c1 += to_string(c % 2);
            c /= 2;
        }
        reverse(a1.begin(), a1.end());
        reverse(b1.begin(), b1.end());
        reverse(c1.begin(), c1.end());

        int maxi_size = max({a1.size(), b1.size(), c1.size()});
        while (a1.size() < maxi_size)
            a1 = '0' + a1;
        while (b1.size() < maxi_size)
            b1 = '0' + b1;
        while (c1.size() < maxi_size)
            c1 = '0' + c1;

        int count = 0;

        for (int i = 0; i < maxi_size; i++) {
            int abit = a1[i] - '0';
            int bbit = b1[i] - '0';
            int cbit = c1[i] - '0';
            if (cbit == 1) {
                if (abit == 0 && bbit == 0) {
                    count++;
                }
            } else {
                count += abit + bbit;
            }
        }
        return count;
    }
};