class Solution {
public:
    int number(char a){
        return a-'0';
    }
    bool isBalanced(string num) {
        int even_sum=0;
        int odd_sum=0;
        for(int i=0;i<num.size();i++){
            int digit=number(num[i]);
            if(i%2==0){
                even_sum+=digit;
            }
            else{
                odd_sum+=digit;
            }
        }
        return even_sum==odd_sum;
    }
};