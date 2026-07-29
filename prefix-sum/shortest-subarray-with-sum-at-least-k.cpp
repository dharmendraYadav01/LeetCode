class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int shortestlen=INT_MAX;
        long long cumulative=0;
        priority_queue<pair<long long ,int>,vector<pair<long long,int>>,greater<>>result;
        for(int i=0;i<n;i++){
            cumulative += nums[i];
            if(cumulative>=k){
                shortestlen=min(shortestlen,i+1);
            }
            while(!result.empty() && (cumulative-result.top().first>=k)){
               shortestlen=min(shortestlen,i-result.top().second);
               result.pop();
   
            }
            result.emplace(cumulative, i);
        }
        return shortestlen==INT_MAX?-1:shortestlen;
    }
};