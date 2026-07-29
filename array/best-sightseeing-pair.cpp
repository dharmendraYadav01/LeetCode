class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        if(values.empty()){
            return 0;
        }
        
        int mx=0;
        int sum=values[0]; //values[i]+i
        for(int j=1;j<values.size();j++){
            mx=max(mx,sum+values[j]-j);
            sum=max(sum,values[j]+j);
        }
        return mx;
    }
};