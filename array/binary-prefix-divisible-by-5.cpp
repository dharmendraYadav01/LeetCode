class Solution {
public:
    long long convert(long long prev,int bit){
        return (prev*2+bit)%5;
    }
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        long long n=0;
        for(int i=0;i<nums.size();i++){
            n=convert(n,nums[i]);
            ans.push_back(n==0);
        }
        return ans;
    }
};