class Solution {
public:
    int getMax(vector<int>&result){
        int max_val=result[0];
        for(int it:result){
            if(it>max_val){
                max_val=it;
            }
        }
        return max_val;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_val=getMax(candies);
        vector<bool>result;
        for(int it:candies){
            if((it+extraCandies)>=max_val){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};