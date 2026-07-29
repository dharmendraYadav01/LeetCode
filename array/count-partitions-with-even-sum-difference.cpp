class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            int n1=accumulate(nums.begin(),nums.begin()+i+1,0);
            int n2=accumulate(nums.begin()+i+1,nums.end(),0);
            // cout<<n1<<" "<<n2<<endl;
            if((n1-n2)%2==0){
                count++;
            }
        }
        return count;
    }
};