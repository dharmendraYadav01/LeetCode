class Solution {
public:
    int countDigits(int num) {
        int data=num;
        int count=0;
        while(num){
            int rem=num%10;
            if(data%rem==0){
                count++;
            }
            num/=10;
        }
        return count;
    }
};