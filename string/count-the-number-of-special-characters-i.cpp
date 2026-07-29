class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>st;
        for(int i=0;i<word.length();i++){
            st.insert(word[i]);
        }
        int count=0;
        for(auto it:st){
            if(isupper(it)){
                continue;
            }
            char x=toupper(it);
            if(st.find(x)!=st.end()){
                count++;
            }
        }
        return count;
    }
};