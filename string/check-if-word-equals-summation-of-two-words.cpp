class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
       
        int num1=0;
        int num2=0;
        int num3=0;
        for(int it:firstWord){
            num1=num1*10+(it-'a');
        }
        for(int it:secondWord){
            num2=num2*10+(it-'a');
        }
        for(int it:targetWord){
            num3=num3*10+(it-'a');
        }
        if(num1+num2==num3){
            return true;
        }
        return false;
    }
};