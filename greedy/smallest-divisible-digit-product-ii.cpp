class Solution {
public:
    bool isGood(long long t) {
        for (int i = 2; i <= 9; i++) {
            while ((t % i) == 0) {
                t /= i;
            }
        }
        return t == 1 ? 1 : 0;
    }
    string smallestNumber(string num, long long t) {
        if (!isGood(t))
            return "-1";

        int mul = 1;
        for (int i = 0; i < num.size(); i++) {
            mul *= num[i] - '0';
            if(mul % t == 0) return num;
        }

        string ans;
        for (int i = 9; i > 1; i--) {
            while ((t % i) == 0) {
                ans.push_back(i + '0');
                t /= i;
            }
        }
        while (ans.size() != num.size())
            ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};