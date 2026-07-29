class Solution {
public:
    vector<int> evenOddBit(int n) {
        string res="";
        int even=0;
        int odd=0;
        while(n){
            res+=to_string(n%2);
            n/=2;
        }
        
        for(int i=0;i<res.size();i++){
            if(i%2==0 && res[i]=='1'){
                even++;
            }
            else if(i%2!=0 && res[i]=='1'){
                odd++;
            }
        }
        return {even,odd};
    }
};