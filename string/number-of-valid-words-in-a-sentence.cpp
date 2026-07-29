class Solution {
public:
    void fill(vector<string>&result,string &sentence){
        for(int i=0;i<sentence.length();){
            if(sentence[i]==' '){
                i++;
                continue;
            }
            int j=i;
            string res="";
            while(j<sentence.length() && sentence[j]!=' '){
                res+=sentence[j];
                j++;
            }
            result.push_back(res);
            i=j;
        }
    }
    bool isValid(string &s){
        int n=s.length();
        if(ranges::any_of(s,::isdigit)){
            return false;
        }
        int hyphen=count(s.begin(),s.end(),'-');
        if(hyphen>1) return false;
        if(hyphen==1) {
            int idx=s.find('-');
            if(idx==0 || idx==n-1) return false;
            if(!isalpha(s[idx-1]) || !isalpha(s[idx+1])) return false;
        }
        string res="!.,";
        for(int i=0;i<n-1;i++){
            if(res.find(s[i])!=string::npos){
                return false;
            }
        }
        // if(s[n-1]=='!' || s[n-1]==',' || s[n-1]=='.' || ranges::any_of(s,::isalpha)) return true;
        return true;
    }
    int countValidWords(string sentence) {
        vector<string>result;
        fill(result,sentence);
        int let=0;
        for(auto it:result){
            if(isValid(it)){
                let++;
            }
        }
        return let;

    }
};