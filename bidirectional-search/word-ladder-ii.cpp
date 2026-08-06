class Solution {
public:
    map<string, int> mp;
    vector<vector<string>> ans;
    void dfs(string word, vector<string>& seq, string beginWord) {
        if (word == beginWord) {
            reverse(seq.begin(),seq.end()); // reverse for ans
            ans.push_back(seq);
            reverse(seq.begin(),seq.end()); // reverse for dfs call or continue the sequence 
            return;
        }
        int step=mp[word];
        for (int i = 0; i < word.size(); i++) {
            char org = word[i];
            for (char c = 'a'; c <= 'z'; c++) {
                word[i] = c;
                if (mp.find(word)!=mp.end() && mp[word]+1==step) {
                    seq.push_back(word);
                    dfs(word, seq, beginWord);
                    seq.pop_back();
                }
            }
            word[i] = org;
        }
    }
    vector<vector<string>> findLadders(string beginWord, string endWord,   vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        st.erase(beginWord);
        queue<string> q;
        q.push(beginWord);
        mp[beginWord] = 0;
        while (!q.empty()) {
            string word = q.front();
            q.pop();
            if(word==endWord) break;
            int step = mp[word];
            for (int i = 0; i < word.size(); i++) {
                char org = word[i];
                for (char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    if (st.count(word) != 0) {
                        st.erase(word);
                        q.push(word);
                        mp[word] = step + 1;
                    }
                }
                word[i] = org;
            }
        }
        vector<string> seq;
        seq.push_back(endWord);
        if (mp.find(endWord) != mp.end()) {
            dfs(endWord, seq, beginWord);
        }
        return ans;
    }
};