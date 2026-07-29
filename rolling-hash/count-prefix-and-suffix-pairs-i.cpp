class Solution {
public:
    bool isprefixAndsuffix(const string& str1, const string& str2){
        int len=str1.size();
        // for begining 
        if(str2.substr(0,len)!=str1){
            return false;
        }
        // for last
        if(str2.substr(str2.size()-len)!=str1){
            return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i<j && isprefixAndsuffix(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};