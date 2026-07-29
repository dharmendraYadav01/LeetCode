class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string res="";
        while(n>0){
            res=to_string(n%2)+res;
            n/=2;
        }
        for(char it:res){
            if(it=='1'){
                count++;
            }
        }
        return count;
    }
};