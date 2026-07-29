class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int i = 0;
        int j = skill.size() - 1;
        long long ans = 0;
        vector<int> mark;
        while (i < j) {
            mark.push_back(skill[i] + skill[j]);
            i++;
            j--;
        }
        for (int i = 0; i < mark.size() - 1; i++) {
            if (mark[i] != mark[i + 1])
                return -1;
        }
        i = 0;
        j = skill.size() - 1;
        while (i < j) {
            int val = skill[i] * skill[j];
            ans += val;
            i++;
            j--;
        }
        return ans;
    }
};