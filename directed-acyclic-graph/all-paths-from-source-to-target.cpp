class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>ans;
        queue<vector<int>>q;
        q.push({0});
        while(!q.empty()){
            auto node=q.front();
            q.pop(); 
            int it=node.back();
            if(it==n-1){
                ans.push_back(node);
                continue;
            }
            for(auto i:graph[it]){
                auto a=node;
                a.push_back(i);
                q.push(a);
            }
        }
        return ans;
    }
};