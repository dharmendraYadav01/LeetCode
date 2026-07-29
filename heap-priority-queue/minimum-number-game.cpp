class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int it:nums){
            pq.push(it);
        }
        vector<int>ans;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            ans.push_back(pq.top());
            ans.push_back(a);
            pq.pop();
        }
        return ans;
    }
};