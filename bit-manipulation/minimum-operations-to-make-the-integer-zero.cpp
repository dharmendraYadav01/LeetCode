// class Solution {
// public:
//     using ll=long long;
//     int makeTheIntegerZero(int num1, int num2) {
//         ll t=1;
//         while(true){
//             ll val=num1-t*num2;
//             if(val<0){
//                 return -1;
//             }
//             // __builtin_popcountll this function count no. of 1's bit in binary of num(like 7=>111) then it return 3(1's)
//             if(__builtin_popcountll(val)<=t && t<=val){
//                 return t;
//             }
//             t++;
//         }
//         return -1;
//     }
// };
// Approach 2: by defining the function that count no. of 1's
class Solution {
public:
    int NBits(long long val){
        int count=0;
        while(val){
            if(val%2==1) count++;
            val/=2;
        }
        return count;
    }
    int makeTheIntegerZero(int num1, int num2) {
        long long t=1;
        while(true){
            long long val=num1-t*num2;
            if(val<0){
                return -1;
            }
            int bit=NBits(val);
            if(bit<=t && t<=val){
                return t;
            }
            t++;
        }
        return -1;
    }
};