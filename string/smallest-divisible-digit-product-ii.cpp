class Solution {
public:
    typedef long long ll;
    int gcd(ll a, ll b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    bool isGood(ll t) {
        for (int i = 2; i <= 9; i++) {
            while ((t % i) == 0) {
                t /= i;
            }
        }
        return t == 1;
    }
    string func(ll num, int t) {
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
        if (!isGood(t))
            return "-1";

    // 1. Check if 'num' itself is already valid
        int n = num.length();
        bool flag = false;
        ll det = t;
        for (char c : num) {
            if (c == '0') {
                flag = true;
                break;
            }
            det = det / gcd(det, c - '0');
        }
        if (!flag && det == 1)
            return num;

    // 2. Find the first zero in 'num'
        int zeroIdx = num.length() - 1;
        for (int i = 0; i < num.length(); i++) {
            if (num[i] == '0') {
                zeroIdx = i;
                break;
            }
        }

    // 3. Precompute remaining factor requirements up to first zero
        vector<ll> remain(n + 1, t);
        for (int i = 0; i < zeroIdx; i++) {
            remain[i + 1] = remain[i] / gcd(remain[i], num[i] - '0');
        }

        for (int i = zeroIdx; i >= 0; i--) {
            ll req = remain[i];
            int freeSlot = n - i - 1;
            for (int d = (num[i] - '0') + 1; d <= 9; d++) {
                ll freq = req / gcd(req, d);
                string rem = func(freq, freeSlot);
                if (rem.length() == freeSlot)
                    return num.substr(0, i) + char(d + '0') + rem;
            }
        }
        return func(t, n + 1);
    }
};