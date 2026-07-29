class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int sr=0;
        int sc=0;
        int dr=n-1;
        int dc=n-1;
        if(n==1 && grid[sr][sc]==0) return 1;
        if(grid[sr][sc]!=0) return -1;
        int dir_r[]={-1,-1,0,1,1,1,0,-1};
        int dir_c[]={0,1,1,1,0,-1,-1,-1};
        vector<vector<int>>dis(n,vector<int>(n,INT_MAX));
        dis[sr][sc]=0;
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{sr,sc}});
        while(!q.empty()){
            int d=q.front().first;
            int r=q.front().second.first;
            int c=q.front().second.second;
            q.pop();
            for(int i=0;i<8;i++){
                int nr=dir_r[i]+r;
                int nc=dir_c[i]+c;
                if(nr>=0 && nr<n && nc>=0 && nc<n && grid[nr][nc]==0 && dis[nr][nc]>(d+1)){
                    if(nr==dr && nc==dc) return d+2;
                    dis[nr][nc]=d+1;
                    q.push({dis[nr][nc],{nr,nc}});
                }
            }
        }
        return -1;
    }
};