class Solution {
public:
    bool possibleToDistribute(int x,vector<int>& quantities,int n ){
        for(auto i:quantities){
            n-= (i + x -1)/x;// same -- ciel(i/x)
            if(n<0){
                return false;
            }
        }
    return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int start=1;
        int end= *max_element(quantities.begin(), quantities.end());
        int result=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(possibleToDistribute(mid,quantities,n)){
                result=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        return result;
    }
};