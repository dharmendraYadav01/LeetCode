class Solution {
public:
    bool isSubset(vector<int>& fre2,vector<int>& temp){
        for(int i=0;i<26;i++){
            if(temp[i]<fre2[i]){
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>result;
        
        vector<int>fre2(26);
        for(auto word:words2){
            int temp[26]={0};
            for(auto it:word){
                temp[it-'a']++;
                fre2[it-'a']=max(fre2[it-'a'],temp[it-'a']);
            }
        }

        
        for(auto words:words1){
            vector<int>temp(26);
            for(auto it:words){
                temp[it-'a']++;
            }
            if(isSubset(fre2,temp)==true){
                result.push_back(words);
            }
        }
        return result;
    }
};