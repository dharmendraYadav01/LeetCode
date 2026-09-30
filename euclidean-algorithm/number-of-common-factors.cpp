class Solution {
public:
    int commonFactors(int a, int b) {
        int max=0;
        if(a>b){
            max=a;
        }
        else{
            max=b;
        }
        int count=0;
        for(int i=1;i<=max;i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
    }
};