class Solution {
public:
    int t[366];
    int solve(vector<int>& days, vector<int>& costs,int size,int i){
        if(i>=size){
            return 0;
        }
        if(t[i]!=-1)
            return t[i];
        // 1 day pass
        int cost_1=costs[0]+solve(days,costs,size,i+1);

        // 7 days pass
        int maxsize=days[i]+7;
        int j=i;
        while(j<size && days[j]<maxsize){
            j++;
        }
        int cost_7=costs[1]+solve(days,costs,size,j);

        // 30 days pass
        maxsize=days[i]+30;
        j=i;
        while(j<size && days[j]<maxsize){
            j++;
        }
        int cost_30=costs[2]+solve(days,costs,size,j);

        return t[i]=min({cost_1,cost_7,cost_30});

    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int size=days.size();
        memset(t,-1,sizeof(t));
        return solve(days,costs,size,0);
    }
};