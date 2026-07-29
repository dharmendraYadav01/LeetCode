class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k){
                count++;
            }
        }
        // priority_queue<int,vector<int>,greater<int>>pq;
        // for(int &it:nums){
        //     pq.push(it);
        // }
        // int count=0;
        // while(pq.top()!=k){
        //     count++;
        //     pq.pop();
        // }
        return count;
    }
};