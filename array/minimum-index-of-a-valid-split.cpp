class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>pq1;
        unordered_map<int,int>pq2;
        for(auto &num:nums){
            pq2[num]++;
        }
        for(int i=0;i<n;i++){
            int num=nums[i];
            pq1[num]++;
            pq2[num]--;
            int n1=i+1;
            int n2=n-i-1;
            if(pq1[num]>n1/2 && pq2[num]>n2/2){
                return i;
            }
        }
        return -1;
    }
};