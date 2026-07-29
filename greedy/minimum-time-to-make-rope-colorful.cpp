class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int count=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                if(neededTime[i]<=neededTime[i+1]){
                    count+=neededTime[i];
                }else{
                    count+=neededTime[i+1];
                    neededTime[i+1]=neededTime[i];
                }
            }
        }
        return count;
    }
};