class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            pair<int,int> temp=pq.top();
            pq.pop();
            int val=temp.first;
            int idx=temp.second;
            val*=multiplier;
            pq.push({val,idx});
        }
        vector<int>result(n,0);
        while(!pq.empty()){
            pair<int,int> it=pq.top();
            pq.pop();
            int val=it.first;
            int idx=it.second;
            result[idx]=val;
        }
        return result;
    }
};