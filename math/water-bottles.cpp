class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles>=numExchange){
            int newone=numBottles/numExchange;
            sum+=newone;
            numBottles=numBottles%numExchange+newone;
            // numBottles=numBottles-numExchange;
            // v++;
            // sum++;
            // if(numBottles<numExchange && v>=numExchange){
            //     numExchange+=v;
            //     v=0;
            // }
            
        }
        return sum;
    }
};