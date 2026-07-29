class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>result;
        vector<pair<int,int>>rand;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(k-- && !pq.empty()){
            rand.push_back(pq.top());
            pq.pop();
        }
        sort(rand.begin(),rand.end(),[&](auto a,auto b){
            return a.second<b.second;
        });
        for(auto it:rand){
            result.push_back(it.first);
        }
        return result;
    }
};