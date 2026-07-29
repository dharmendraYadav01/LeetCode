class Solution {
public:
    // int m,n;
    // vector<int>dir{}
    void call_dfs(vector<vector<int>>& image, int sr, int sc, int color,int start){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || start!=image[sr][sc]) return;
        image[sr][sc]=color;
        call_dfs(image,sr,sc+1,color,start);
        call_dfs(image,sr,sc-1,color,start);
        call_dfs(image,sr+1,sc,color,start);
        call_dfs(image,sr-1,sc,color,start);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int start=image[sr][sc];
        if(start==color){
            return image;
        }
        call_dfs(image,sr,sc,color,start);
        return image;
    }

};