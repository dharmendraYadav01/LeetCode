class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        vector<int>leftSum;
        vector<int>rightSum;
        leftSum.push_back(0);
        for(int i=1;i<nums.size();i++){
            int j=0;
            int sum=0;
            while(j<i){
                sum+=nums[j++];
            }
            leftSum.push_back(sum);
        }
        for(int i=0;i<size-1;i++){
            int j=i+1;
            int sum=0;
            while(j<size){
                sum+=nums[j++];
            }
            rightSum.push_back(sum);
        }
        rightSum.push_back(0);
        for(int i=0;i<size;i++){
            if(rightSum[i]==leftSum[i]){
                return i;
            }
        }
        return -1;
    }
};