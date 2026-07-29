class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = 0;
        for (int i : apple) {
            total += i;
        }
        int count = 0;
        sort(capacity.rbegin(), capacity.rend());
        for (int i : capacity) {
            if (total <= 0)
                break;
            total -= i;
            count++;
        }
        return count;
    }
};