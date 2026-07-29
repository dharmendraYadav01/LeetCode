class Solution {
public:
    int t[201][201][2];
    int M = 1e9 + 7;
    int solve(int zeroleft, int oneleft, bool visOnes, int limit) {
        if (zeroleft == 0 && oneleft == 0)
            return 1;

        // memorization
        if (t[zeroleft][oneleft][visOnes] != -1)
            return t[zeroleft][oneleft][visOnes];
        int result = 0;

        // exploring zeros
        if (visOnes == true) {
            for (int len = 1; len <= min(zeroleft, limit); len++) {
                result =
                    (result + solve(zeroleft - len, oneleft, false, limit)) % M;
            }
        }
        // exploring ones
        else {
            for (int len = 1; len <= min(oneleft, limit); len++) {
                result =
                    (result + solve(zeroleft, oneleft - len, true, limit)) % M;
            }
        }
        return t[zeroleft][oneleft][visOnes] = result;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(t, -1, sizeof(t));
        int startwithone = solve(zero, one, false, limit);
        int startwithzero = solve(zero, one, true, limit);
        return (startwithone + startwithzero)% M;
    }
};