class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<int> occur(n, 0);
        int i = n - 1;
        int j = m - 1;
        int isequal = 0;
        while (i >= 0) {
            if (j >= 0 && word1[i] == word2[j]) {
                isequal++;
                j--;
            }
            occur[i] = isequal;
            i--;
        }
        i = 0;
        j = 0;
        vector<int> seq;
        bool canChange = true;
        while (i < n && j < m) {
            if (word1[i] == word2[j]) {
                seq.push_back(i);
                j++;
            } else if (canChange && i + 1 < n && occur[i + 1] >= (m - j - 1)) {
                seq.push_back(i);
                j++;
                canChange = false;
            }
            i++;
        }
        return j == m ? seq : vector<int>();
    }
};