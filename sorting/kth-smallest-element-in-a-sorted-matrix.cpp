class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>result;
        for(auto it:matrix){
            for(int i=0;i<it.size();i++){
                result.push_back(it[i]);
            }
        } 
        sort(result.begin(),result.end());
        return result[k-1];
    }
};