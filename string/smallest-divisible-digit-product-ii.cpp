class Solution {
public:
    typedef long long ll;
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    bool isGood(long long t) {
        for (int i = 2; i <= 9; i++) {
            while ((t % i) == 0) {
                t /= i;
            }
        }
        return t == 1 ? 1 : 0;
    }
    string func(int num, int t) {
        string ans;
        for (int i = 9; i > 1; i--) {
            while ((num % i) == 0) {
                ans.push_back(i + '0');
                num /= i;
            }
        }
        while (ans.size() < t)
            ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string smallestNumber(string num, long long t) {
        //
        int n = num.length();
        if (!isGood(t))
            return "-1";

        //
        int mul = 1;
        for (int i = 0; i < num.size(); i++) {
            int d = num[i] - '0';
            if (d == 0)
                break;
            mul *= d;
            if (mul % t == 0)
                return num;
        }

        //
        int zeroIdx = num.length() - 1;
        for (int i = 0; i < num.length(); i++) {
            if (num[i] == '0')
                zeroIdx = i;
        }
        vector<ll> remain(n + 1, t);
        for (int i = 0; i < n; i++) {
            remain[i + 1] = remain[i] / gcd(remain[i], num[i] - '0');
        }

        for (int i = zeroIdx; i >= 0; i--) {
            ll req = remain[i];
            int freeSlot = n - i - 1;
            for (int d = (num[i] - '0') + 1; d <= 9; d++) {
                int freq = req / gcd(req, d);
                string rem = func(freq, freeSlot);
                if (rem.length() == freeSlot)
                    return num.substr(0, i) + char(d + '0') + rem;
            }
        }
        return func(t, n + 1);
    }
};