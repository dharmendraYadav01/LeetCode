class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count=0;
        while(startValue!=target){
            count++;
            if(target<startValue){
                target++;
            }else if(target%2!=0){
                target+=1;
            }else{
                target/=2;
            }
        }
        return count;
    }
};