class Solution {
public:
    int numberOfChild(int n, int k) {
        int idx=0;
        int dir=1;
        while(k>0){
            if(idx+dir>=0 && idx+dir<n){
                idx+=dir;
                k--;
            }else{
                dir*=-1;
            }
        }
        return idx;
    }
};