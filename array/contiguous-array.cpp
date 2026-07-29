class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int maxlen=0;
       int sum=0;
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==0){
                maxlen=max(maxlen,i+1);
            }
            if(m.find(sum)!=m.end()){
                maxlen=max(maxlen,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
        return maxlen;
    }
};