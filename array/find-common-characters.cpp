class Solution {
public:
    void isFilled(string str1,vector<int>&count){
        for(char &c:str1){
            count[c-'a']++;
        }
    }
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        vector<int>count(26,0);
        isFilled(words[0],count);
        for(int i=1;i<words.size();i++){
            vector<int>temp(26,0);
            isFilled(words[i],temp);
            for(int j=0;j<26;j++){
                count[j]=min(count[j],temp[j]);
            }
        }
        for(int i=0;i<26;i++){
            int n=count[i];
            while(n--){
                result.push_back(string(1,i+'a'));
            }
        }
        return result;
    }
};