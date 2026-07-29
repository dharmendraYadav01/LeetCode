class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int start=0;
        int last=x;
        long mid=0;
        while(start<=last){
            mid=start+(last-start)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                start=mid+1;
            }
            else if(mid*mid>x){
                last=mid-1;
            }
        }
        return last; 
    }
};