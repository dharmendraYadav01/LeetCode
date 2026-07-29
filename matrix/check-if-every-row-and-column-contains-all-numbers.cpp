class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        unordered_set<int>s1,s2;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                // for row
                if(s1.find(matrix[i][j])!=s1.end()){
                    return false;
                }
                s1.insert(matrix[i][j]);
                // for column
                if(s2.find(matrix[j][i])!=s1.end()){
                    return false;
                }
                s2.insert(matrix[j][i]);
            }
            s1.clear();
            s2.clear();
        }
        return true;
    }
};