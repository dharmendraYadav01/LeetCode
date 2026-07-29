class Solution {
public:
    bool isPivot(int start,int pivot,int end){
        int sum1=0;
        for(int i=start;i<=pivot;i++){
            sum1+=i;
        }
        int sum2=0;
        for(int i=pivot;i<=end;i++){
            sum2+=i;
        }
        return sum1==sum2;
    }
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++){
            if(isPivot(1,i,n)){
                return i;
            }
        }
        return -1;
    }
};