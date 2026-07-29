class Solution {
public:
    bool isValid(string str1,string str2){
        unordered_set<char>s1(str1.begin(),str1.end());
        unordered_set<char>s2(str2.begin(),str2.end());
        return s1==s2;
    }
    int similarPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(isValid(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};