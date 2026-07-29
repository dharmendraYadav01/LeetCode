class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int gcdOfOddEvenSums(int n) {
        n = 2 * n;
        int i = 1;
        int even = 0, odd = 0;
        while (i <= n) {
            if (i % 2 == 0)
                even += i;
            else
                odd += i;
            i++;
        }
        cout << even << " " << odd;
        return gcd(even, odd);
    }
};