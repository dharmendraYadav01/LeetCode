class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxh;
        for(int i=0;i<stones.size();i++){
            maxh.push(stones[i]);
        }
        while(maxh.size()>1){
            int y=maxh.top(); maxh.pop();
            int x=maxh.top(); maxh.pop();
            // if(x.first==y.first){
            //     stones.erase(stones.begin()+(x.second));
            //     stones.erase(stones.begin()+(y.second));
            // }
            if(x!=y){
                maxh.push(y-x);
            }
        }
        return maxh.empty()?0:maxh.top(); 
    }
};