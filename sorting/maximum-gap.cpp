class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int size=nums.size();
        if(size<2) return 0;
        int max_diff=INT_MIN;
        sort(nums.begin(),nums.end());
        int i=0,j=i+1;
        while(i!=j && i<size && j<size){
            int diff=nums[j++]-nums[i++];
            max_diff=max(max_diff,diff);
        }
        return max_diff;
    }
};