// class Solution {
// public:
//     int numSteps(string s) {
//         int n = 0;
//         long long base = 1;
//         long long rem = 0;
//         for (int i = s.length() - 1; i >= 0; i--) {
//             if (s[i] == '1') {
//                 rem += base;
//             }
//             base *= 2;
//         }
//         int count = 0;
//         while (rem > 1) {
//             if (rem % 2 == 0) {
//                 rem /= 2;
//                 count++;
//             } else {
//                 rem += 1;
//                 count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;

        for (int i = s.size() - 1; i > 0; i--) {
            if ((s[i] - '0' + carry) % 2 == 0) {
                // Even → divide by 2
                steps += 1;
            } else {
                // Odd → add 1 then divide by 2
                steps += 2;
                carry = 1;
            }
        }

        return steps + carry;
    }
};