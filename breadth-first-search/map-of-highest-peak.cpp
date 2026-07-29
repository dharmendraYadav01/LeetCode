class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size();
        int n=isWater[0].size();
        
        vector<vector<int>>dir{{0,1},{0,-1},{-1,0},{1,0}};
        vector<vector<int>>height(m,vector<int>(n,-1));
        queue<pair<int,int>>q;
        //height of water cells must be 0 only
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isWater[i][j]==1){ // this cell is water
                    height[i][j]=0; //start of multi source of BFS
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int N=q.size();
            while(N--){
                pair<int,int> temp= q.front();
                q.pop();
                int i=temp.first;
                int j=temp.second;
                for(auto &d:dir){
                    int i_=i+d[0];
                    int j_=j+d[1];
                    if(i_>=0 && i_<m && j_>=0 && j_<n && height[i_][j_]==-1){
                        height[i_][j_]=height[i][j]+1;
                        q.push({i_,j_});
                    }
                }
            }
        }
        return height;
    }
};