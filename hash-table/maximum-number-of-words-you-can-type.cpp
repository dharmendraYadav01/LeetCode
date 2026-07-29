class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string>result;
        int j=0;
        for(int i=0;i<text.length();){
            j=i;
            string res="";
            while(j<text.length() && text[j]!=' '){
                res+=text[j];
                j++;
            }
            result.push_back(res);
            i=j+1;
        }
        int count=0;
        for(auto it:result){
            bool flag=false;
            for(int i=0;i<brokenLetters.length();i++){
                if(it.find(brokenLetters[i])!=string::npos){
                    flag=true;
                    break;
                }
            }
            if(!flag) count++;            
        }
        return count;
    }
};