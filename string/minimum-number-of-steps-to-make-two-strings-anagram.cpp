class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> frq_s;
        unordered_map<char, int> frq_t;
        for (char c : s) {
            frq_s[c]++;
        }

        for (char c : t) {
            frq_t[c]++;
        }

        int ans = 0;
        for (auto it:frq_s) {
            if(it.second>frq_t[it.first]){
                ans+=abs(it.second-frq_t[it.first]);
            }
        }

        return ans;
    }
};