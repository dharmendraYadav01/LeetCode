// class Solution {
// public:
//     vector<int> resultsArray(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int>subarray;
//         for(int i=0;i<=n-k;i++){
//             vector<int>result(nums.begin()+i,nums.begin()+i+k);
//             int maxval= *max_element(result.begin(),result.end());
//             int isSorted=is_sorted(result.begin(),result.end());
//             bool isConsecutive=true;
//             for(int j=1;j<result.size();j++){
//                 if((result[j]-result[j-1])!=1){
//                     isConsecutive=false;
//                 }
//             }
//             if(isSorted && isConsecutive){
//                 subarray.push_back(maxval);
//             }
//             else subarray.push_back(-1);

//         }
//         return subarray;
//     }
// };
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        int l = 0;
        int consec_cnt = 1;
        
        for (int r = 0; r < nums.size(); r++) {
            if (r > 0 && nums[r - 1] + 1 == nums[r]) {
                consec_cnt++;
            }
            
            if (r - l + 1 > k) {
                if (nums[l] + 1 == nums[l + 1]) {
                    consec_cnt--;
                }
                l++;
            }
            
            if (r - l + 1 == k) {
                res.push_back(consec_cnt == k ? nums[r] : -1);
            }
        }
        
        return res;
    }
};