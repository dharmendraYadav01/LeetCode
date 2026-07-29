class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int size=nums.size();
        if(size<2) return 0;
        if(size==2) return 1;
        int temp=nums[0]+nums[1];
        int i=2;
        int count=1;
        while(i<size){
            if((nums[i]+nums[i+1])!=temp){
                break;
            }
            count++;
            i+=2;
        }
        return count;
    }
};