class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        const long long mod = 1e9 + 7;
        priority_queue<long, vector<long>, greater<long>> pq;
        long long count = 1;
        for (int it : nums)
            pq.push(it);
        while (k-- > 0) {
            long long n = pq.top();
            pq.pop();
            pq.push(n + 1);
        }
        while (!pq.empty()) {
            count = (count * pq.top()) % mod;
            pq.pop();
        }
        return count;
    }
};