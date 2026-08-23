class Solution {
public:
    bool sumGame(string num) {
        int ls = 0, lq = 0;
        int rs = 0, rq = 0;

        // ls = known sum of left half , lq = no. of '?' in left half.
        for (int i = 0; i < num.length() / 2; i++) {
            if (num[i] == '?')
                lq++;
            if (num[i] != '?')
                ls += num[i] - '0';
        }

        // rs = known sum of right half , rq = no. of '?' in right half.
        for (int i = num.length() / 2; i < num.length(); i++) {
            if (num[i] == '?')
                rq++;
            if (num[i] != '?')
                rs += num[i] - '0';
        }

        // if no. of '?' is odd then alice win always.
        if ((lq + rq) % 2 != 0)
            return true;

        // but if '?' is even then alice choose x and bob always choose (9-x)
        // and so on to balance sum.
        return (ls + (4.5 * lq)) == (rs + (4.5 * rq)) ? 0 : 1;
    }
};