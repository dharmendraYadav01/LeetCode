class Solution {
public:
    int GetAvg(vector<int>&result){
        int n=result.size();
        int sum=0;
        for(int it:result){
            sum+=it;
        }
        return sum/n;
    }
    int smallestAbsent(vector<int>& nums) {
        int avg=GetAvg(nums);
        int i=1;
        while(true){
            if(i>avg && find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
            }else{
                i++;
            }
        }
        return -1;
    }
};