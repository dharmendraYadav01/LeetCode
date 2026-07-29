class Solution {
public:
    bool canAliceWin(int n) {
        int stonesRem=n;
        int stonetoremove=10;
        bool isalice=true;
        while(stonesRem>0){
            if(stonesRem<stonetoremove){
                return !isalice;
            }
            stonesRem-=stonetoremove;
            stonetoremove--;
            isalice=!isalice;
        }
        return !isalice;
        // if (n==1 || n<10){
        //     return false;
        // }
        // else if(n==10){
        //     return true;
        // }
        // else if(n>10){
        //     int rem=n-10;
        //     if(rem<(n-1)){
        //         return true;
        //     }
        //     return false;
        // }
        // return false;
        
    }
};