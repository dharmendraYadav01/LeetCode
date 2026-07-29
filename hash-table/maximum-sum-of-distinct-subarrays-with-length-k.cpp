class Solution {
public:
//     bool areAllElementsDistinct(const vector<int>& subarray) {
//     set<int> unique_elements(subarray.begin(), subarray.end());
//     return unique_elements.size() == subarray.size();
// }
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // vector<vector<int>>result
            int n=nums.size();
            long long sum=0;
            long long maxsum=0;
            unordered_set<int>result;
            int i=0;
            int j=0;
            while(j<n){
                while(result.count(nums[j])){
                    sum-=nums[i];
                    result.erase(nums[i]);
                    i++;
                }
                sum+=nums[j];
                result.insert(nums[j]);
                if(j-i+1==k){
                    maxsum=max(maxsum,sum);
                    sum-=nums[i];
                    result.erase(nums[i]);
                    i++;
                }
                j++;
            }
            return maxsum;
        // for(int i=0;i<n-k;i++){
        //     vector<int>subarray;
        //     for(int j=i;j<i+k;j++){
        //         subarray.push_back(nums[j]);
        //     }
        //     if(areAllElementsDistinct(subarray) && subarray.size()==k){
        //         for(int i=0;i<subarray.size();i++){
        //             sum+=subarray[i];
        //         }
        //         maxsum=max(maxsum,sum);
        //     }
        //     else{
        //         return 0;
        //     } 
        //     // result.push_back(subarray);
        // }
        
    }
};