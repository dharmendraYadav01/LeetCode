class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int j = 0;
        for (int i = 0; i < chars.size();) {
            j = i;
            ans += chars[i];
            int count = 0;
            while (j < chars.size() && chars[i] == chars[j]) {
                count++;
                j++;
            }
            i = j;
            if (count != 1)
                ans += to_string(count);
        }
        for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }
        return ans.size();
    }
};