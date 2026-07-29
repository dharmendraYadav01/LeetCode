class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if (find(words.begin(), words.end(), target) == words.end())
            return -1;
        int n = words.size();
        int i = startIndex;
        int cnt = 0;
        int m = 0, d = 0;
        while (true) {
            if (words[i] == target) {
                m = cnt;
                break;
            }
            cnt++;
            i = (i + 1) % n;
            if (i == startIndex)
                break;
        }
        i = startIndex;
        int cnt_r = 0;
        while (true) {
            if (words[i] == target) {
                d = cnt_r;
                break;
            }
            cnt_r++;
            i = (i - 1 + n) % n;
            if (i == startIndex)
                break;
        }
        return min(m, d);
    }
};