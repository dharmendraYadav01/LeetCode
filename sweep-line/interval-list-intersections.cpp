class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i=0;
        int j=0;
        int n=firstList.size();
        int m=secondList.size();
        int low=0,high=0;
        vector<vector<int>>result;
        while(i<n && j<m){
            low=max(firstList[i][0],secondList[j][0]);
            high=min(firstList[i][1],secondList[j][1]);
            if(low<=high){
                result.push_back({low,high});
            }
            if(firstList[i][1]<secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};