class Solution {
public:
    int isNegative(vector<int>&result){
        int sum=0;
        for(int &it:result){
            if(it<0){
                sum++;
            }
        }
        return sum;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
        for(auto it:grid){
            sum+=isNegative(it);
        }
        return sum;
    }
};