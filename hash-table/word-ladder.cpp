class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        // we use set to avoid linear time
        unordered_set<string> st(wordList.begin(), wordList.end());
        st.erase(beginWord);
        while (!q.empty()) {
            string word = q.front().first;
            int level = q.front().second;
            q.pop();
            if (word == endWord)
                return level;
            for (int i = 0; i < word.length(); i++) {
                char first = word[i];
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;
                    if (st.find(word) != st.end()) {
                        st.erase(word); // if word found then erase them from set
                        q.push({word, level + 1});
                    }
                    word[i] = first;
                }
            }
        }
        return 0;
    }
};