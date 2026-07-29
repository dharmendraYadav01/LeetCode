class Solution {
public:
    // Brute force give run time complixity...................
    // int find(vector<int>&result,int skip_idx){
    //     int count_one=0;
    //     int max_len=0;
    //     for(int i=0;i<result.size();i++){
    //         if(i==skip_idx) continue;
    //         if(result[i]==1){
    //             count_one++;
    //             max_len=max(max_len,count_one);
    //         }else{
    //             count_one=0;
    //         }
    //     }
    //     return max_len;
    // }
    int longestSubarray(vector<int>& nums) {
        int countZeroes=0;
        int maxOnes=0;
        int i=0;            
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0) countZeroes++;
            while(countZeroes>1){
                if(nums[i]==0) countZeroes--;
                i++;
            }
            maxOnes=max(maxOnes,j-i);
        }
        return maxOnes;
        // int size=nums.size();
        // int max_ones=0;
        // int no_zeros=0;
        // for(int i=0;i<size;i++){
        //     if(nums[i]==0){
        //         no_zeros++;
        //         max_ones=max(max_ones,find(nums,i));
        //     }
        // }
        // if(no_zeros==0) return size-1;
        // return max_ones;
    }
};