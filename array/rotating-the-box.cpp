class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();
        for(int row=0;row<m;row++){
            int isempty=n-1;
            for(int col=n-1;col>=0;col--){
                if(box[row][col]=='*'){
                    isempty=col-1;
                }
                else if(box[row][col]=='#'){
                    swap(box[row][col],box[row][isempty]);
                    isempty--;
                }
            }
        }
        vector<vector<char>>rotate(n,vector<char>(m));
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                rotate[col][m-row-1]=box[row][col];
            }
        }
        
        return rotate;
    }
};