class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int it:nums){
            if(it%2==0 && it%3==0){
                sum+=it;
                count++;
            }
        }
        return count!=0?sum/count:count;
    }
    
};