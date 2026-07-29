class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int sum=numBottles;
        while(numBottles>=numExchange){
            // int newone=numBottles%numExchange;
            numBottles-=numExchange;
            numExchange++;
            sum++;
            numBottles++;
        }
        return sum;
    }
};