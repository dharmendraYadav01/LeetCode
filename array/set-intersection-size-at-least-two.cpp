class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[&](auto a,auto b){
            if(a[1]==b[1]) return a[0]>b[0];
            return a[1]<b[1];
        });
        int ans=0;
        int last=-1;
        int secondlast=-1;
        for(auto it:intervals){
            int start=it[0];
            int end=it[1];
            if(start<=secondlast) continue;
            if(start>last){
                ans+=2;
                last=end;
                secondlast=end-1;
            }else{
                ans++;
                secondlast=last;
                last=end;
                
            }
        }
        return ans;
    }
};