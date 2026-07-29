class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long,vector<long>,greater<long>>min;
        vector<int>res={2,3,5};
        unordered_set<int>visited;
        visited.insert(1);
        min.push(1); 
        long ans=1;
        while(n--){
            ans=min.top();
            min.pop();
            for(auto &it:res){
                long next=ans*it;
                if(!visited.count(next)){
                    visited.insert(next);
                    min.push(next);
                }
            }
        }
        return ans;
    }
};