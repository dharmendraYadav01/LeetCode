class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int targetBits = __builtin_popcount(num2);
        int result = 0;

        // Use the set bits in num1
        for (int i = 31; i >= 0 && targetBits > 0; --i) {
            if ((num1 >> i) & 1) {
                result |= (1 << i);
                --targetBits;
            }
        }

        // If more bits are needed, set the lowest bits
        for (int i = 0; targetBits > 0; ++i) {
            if (!((result >> i) & 1)) {
                result |= (1 << i);
                --targetBits;
            }
        }

        return result;
    }
};