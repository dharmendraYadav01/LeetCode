class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]){
                count++;
            }
        }
        // map<char, int> mp;
        // for (char c : word) {
        //     mp[c]++;
        // }

        // for(auto it:mp){
        //     if(it.second>1){
        //         count+=(it.second-1);
        //     }
        // }
        return count;
    }
};