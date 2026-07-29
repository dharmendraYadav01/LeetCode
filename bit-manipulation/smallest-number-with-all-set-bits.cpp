class Solution {
public:
    bool isSet(int n){
        string res="";
        while(n!=0){
            res+=to_string(n%2);
            n/=2;
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<res.length();i++){
            if(res[i]=='0') return false;
        }
        return true;
    }
    int smallestNumber(int n) {
        while(true){
            if(isSet(n)){
                return n;
            }
            n++;
        }
        return 0;
    }
};