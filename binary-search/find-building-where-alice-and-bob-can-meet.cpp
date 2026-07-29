class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        int n=heights.size();
        int m=queries.size();
        vector<int>result(m, -1);
        vector<vector<pair<int,int>>>d(n);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>>pq;
        for(int i = 0; i < m; i++){
            int a = queries[i][0], b = queries[i][1];
            if(a == b){
                result[i] = a;
            }
            else if(a < b && heights[a] < heights[b]){
                result[i] = b;
            }
            else if(a > b && heights[a] > heights[b]){ 
                result[i] = a;
            }
            else{
                int maxh = max(heights[a], heights[b]);
                int maxi = max(a,b);
                d[maxi].push_back({maxh,i});
            }
        }
        for(int i = 0; i < n; i++){
            for(auto &it : d[i])pq.push(it);
            while(!pq.empty() && pq.top().first < heights[i]){
                result[pq.top().second] = i;
                pq.pop();
            }
        }
        // vector<int>result;
        // for(auto &query:queries){
        //     int alice=query[0];
        //     int bob=query[1];
        //     // int max_ele=max(alice,bob);
        //     int left=-1;
        //     for(int i=0;i<n;i++){
        //         if(heights[i]>=alice && heights[i]>=bob){
        //             left=i;
        //             break;
        //         }  
        //     }
        //     result.push_back(left);
        
        return result;
    }
};