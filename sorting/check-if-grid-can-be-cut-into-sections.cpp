class Solution {
public:
    vector<vector<int>>merge(vector<vector<int>>&intervels){
        int n=intervels.size();
        
        sort(begin(intervels),end(intervels));
        vector<vector<int>>result;

        result.push_back(intervels[0]);
        for(int i=1;i<n;i++){
            if(intervels[i][0] < result.back()[1]){
                // result.back()[0]=min(result.back()[0],intervels[i][0]);
                result.back()[1]=max(result.back()[1],intervels[i][1]);
            }
            else{
                result.push_back(intervels[i]);
            }
        }
        return result;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>>x_axis;
        vector<vector<int>>y_axis;
        for(auto &cood:rectangles){
            int x1=cood[0];
            int y1=cood[1];
            int x2=cood[2];
            int y2=cood[3];
            x_axis.push_back({x1,x2});
            y_axis.push_back({y1,y2});
        }
        vector<vector<int>>result1=merge(x_axis);
        vector<vector<int>>result2=merge(y_axis);
        return result1.size()>=3 || result2.size()>=3;
    }
};