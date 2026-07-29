class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char, int> mp;
        for (char c = 'a'; c <= 'z'; c++) {
            mp[c] = 1;
        }
        for (char c = 'A'; c <= 'Z'; c++) {
            mp[c] = 2;
        }
        for (char c = '0'; c <= '9'; c++) {
            mp[c] = 3;
        }
        mp['!'] = 5;
        mp['@'] = 5;
        mp['#'] = 5;
        mp['$'] = 5;
        unordered_set<char> st;
        for (char c : password) {
            st.insert(c);
        }
        int strength = 0;
        for (auto& c : st) {
            strength += mp[c];
        }
        return strength;
    }
};