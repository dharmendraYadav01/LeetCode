class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream word(sentence);
        string x;
        int index=1;
        while(word>>x){
            if(x.find(searchWord)==0){
                return index;
            }
            index++;
        }
        return -1;
    }
};