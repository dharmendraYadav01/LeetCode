class Solution {
public:
    bool isVowel(char x){
        if(x=='a' || x=='e'|| x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                res+=s[i];
            }
        }
        sort(res.begin(),res.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                s[i]=res[j];
                j++;
            }
        }
        return s;
    }
};