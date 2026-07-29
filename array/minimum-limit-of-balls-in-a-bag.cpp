class Solution {
public:
    bool isPossible(vector<int>& nums, int maxOperations,int mid){
        int oper=0;
        for(int &num:nums){
            int total=num/mid;
            if(num%mid==0){
                total--;
            }
            oper+=total;
        }
        return oper<=maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations){
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int mid;
        int result=r;
        while(l<=r){
            mid=(l+r)/2;
            if(isPossible(nums,maxOperations,mid)){
                result=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return result;
    }
};