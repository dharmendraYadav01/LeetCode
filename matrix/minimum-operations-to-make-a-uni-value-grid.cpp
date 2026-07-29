class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>result;
        for(auto &it:grid){
            for(int &val:it){
                result.push_back(val);
            }
        }
        sort(result.begin(),result.end());
        for(int &val:result){
            if(abs(val-result[0])%x!=0){
                return -1;
            }
        }
        int median=result[result.size()/2];
        int operation=0;
        for(int &val:result){
            operation+=abs(val-median)/x;
        }
        return operation;

    }
};