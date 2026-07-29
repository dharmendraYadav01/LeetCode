class Solution {
public:
    bool isVowel(char ch){
        return ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'; 

    }
    string reverseVowels(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            while (i < j && !isVowel(s[i])) {
                i++;
            }
            while (i < j && !isVowel(s[j])) {
                j--;
            }
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            
        }
        return s;
    }
};