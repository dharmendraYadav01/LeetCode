class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        int size=intervals.size();
        sort(intervals.begin(),intervals.end(),[&](vector<int>a,vector<int>b){
            return a[1]<b[1];
        });
        int val=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<val){
                count++;
            }else{
                val=intervals[i][1];
            }
        }
        for(auto it:intervals){
            cout<<it[0]<<" "<<it[1]<<endl;
        }
        return count;
    }
};