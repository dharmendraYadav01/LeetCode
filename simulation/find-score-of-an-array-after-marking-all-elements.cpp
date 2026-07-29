class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; // yaha par hum min heap define kar rahe hai with pair having value and index
        vector<bool>visited(n,false); //yaha check karenge ke agar inx visited nahi hai then mark visited.
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        long long score=0;
        while(!pq.empty()){
            pair<int,int> temp=pq.top();
            int ele=temp.first;
            int idx=temp.second;
            pq.pop();

            if(!visited[idx]){
                visited[idx]=true;
                score+=ele;

                if((idx-1)>=0 && !visited[idx-1]){
                    visited[idx-1]=true;
                }
                if((idx+1)<n && !visited[idx+1]){
                    visited[idx+1]=true;
                }
            }
        }
        return score;
    }
};