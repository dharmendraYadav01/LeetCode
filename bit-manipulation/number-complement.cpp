class Solution {
public:
    int findComplement(int num) {
        string res="";
        string result="";
        char ch1='0';
        char ch2='1';
        while(num>0){
            res=to_string(num%2)+res;
            num/=2;
        }
        for(char it:res){
            if(it=='1'){
                result+=ch1;
            }
            else{
                result+=ch2;
            }
        }
        int temp=stoi(result,nullptr,2);
        return temp;
    }
};