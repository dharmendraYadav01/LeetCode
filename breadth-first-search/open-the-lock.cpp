class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> deadend(deadends.begin(), deadends.end());
        queue<pair<string, int>> q;
        set<string> vis;
        q.push({"0000", 0});
        vis.insert("0000");
        while (!q.empty()) {
            string s = q.front().first;
            int move = q.front().second;
            q.pop();
            if(deadend.count(s)) continue;
            if (s == target)
                return move;
            for (int i = 0; i < 4; i++) {
                for (auto d : {-1, 1}) {
                    int dig = (s[i] - '0' + d + 10) % 10;
                    string pat = s;
                    pat[i] = dig + '0';
                    if (!deadend.count(pat) && !vis.count(pat)) {
                        q.push({pat, move + 1});
                        vis.insert(pat);
                    }
                }
            }
        }
        return -1;
    }
};