class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_a=0;
        int max_dio=0;
        for(auto &it:dimensions){
            int len=it[0];
            int wdth=it[1];
            int dio=(len*len)+(wdth*wdth);
            int area=len*wdth;
            if(dio>max_dio || (dio==max_dio && area>max_a)){
                max_dio=dio;
                max_a=area;
                
            }
        }
        return max_a;
    }
};