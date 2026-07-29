class Solution {
public:
    // int Digit(int n){
    //     int count=0;
    //     while(n!=0){
    //         count++;
    //         n/=10;
    //     }
    //     return count;
    // }
    // int Sum(int n){
    //     int sum=0;
    //     while(n!=0){
    //         sum+=(n%10);
    //         n/=10;
    //     }
    //     return sum;
    // }
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string res="";
        for(int i=0;i<num;i++){
            int digit=min(9,sum);
            res+=to_string(digit);
            sum-=digit;
        }
        return res;
        // int n=0;
        // int score=-1;
        // while (true) {
        //     int digit=Digit(n);
        //     int n_sum=Sum(n);
        //     if(digit==num && n_sum==sum){
        //         score=max(score,n);
        //     }
        //     if(digit<=num){
        //         n++;
        //     }
        //     else{
        //         return to_string(n);
        //     }
        // }
        // cout<<n;
        return "";
    }
};