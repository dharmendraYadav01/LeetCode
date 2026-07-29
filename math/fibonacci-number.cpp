class Solution {
public:
    int fib(int n) {
        // if(n==0){
        //     return 0;
        // }
        // if(n==1){
        //     return 1;
        // }
        // return fib(n-1)+fib(n-2);
        //.........another approch................
        if(n<=1){
            return n;
        }
        int a=0;
        int b=1;
        for(int i=2;i<=n;i++){
            int c=b;
            b=a+b;
            a=c;
        }
        return b;
    }
};