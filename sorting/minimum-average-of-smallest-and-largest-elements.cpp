class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        priority_queue<int>max_h;
        priority_queue<int,vector<int>,greater<int>>min_h;
        for(auto it:nums){
            max_h.push(it);
        }
        for(auto it:nums){
            min_h.push(it);
        }
        vector<double>result;
        while(!max_h.empty() && !min_h.empty()){
            double mid=(max_h.top()+min_h.top())/2.0;
            result.push_back(mid);
            max_h.pop();
            min_h.pop();
        }
        sort(result.begin(),result.end());
        return result[0];
    }
};