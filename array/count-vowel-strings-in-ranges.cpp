class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> v;
        for (auto& it : words) {
            v.push_back(isVowel(it[0]) && isVowel(it[it.size() - 1]) ? 1 : 0);
        }
        vector<int> pref(v.size());
        pref[0] = v[0];
        for (int i = 1; i < v.size(); i++) {
            pref[i] = pref[i - 1] + v[i];
        }
        vector<int> ans;
        for (auto& it : queries) {
            int l = it[0];
            int r = it[1];
            ans.push_back(l == 0 ? pref[r] : pref[r] - pref[l - 1]);
        }
        return ans;
    }
    // bool isvowel(const string& s){
    //     int n=s.size();
    //     if ((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')&&(s[n-1] == 'a' || s[n-1] == 'e' || s[n-1] == 'i' || s[n-1] == 'o' || s[n-1] == 'u')) {
    //         return true;
    //     }
        
    //     return false;
    // }
    // vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    //     vector<int>res;
    //     for(vector<int> it:queries){
    //         int count=0;
    //         for(int i=it[0];i<=it[1];i++){
    //             if(isvowel(words[i])){
    //                 count++;
    //             }   
    //         }
    //         res.push_back(count);
    //     }
    //     return res;
    // }
};