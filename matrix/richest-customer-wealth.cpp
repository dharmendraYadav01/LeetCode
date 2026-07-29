class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum=0;
        for(auto &it:accounts){
            int sum=0;
            for(int i=0;i<it.size();i++){
                sum+=it[i];
            }
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};