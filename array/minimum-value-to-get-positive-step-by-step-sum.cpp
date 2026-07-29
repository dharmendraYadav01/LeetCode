// class Solution {
// public:
//     int minStartValue(vector<int>& nums) {
//         vector<int>data=nums;
//         int pre_sum=0;
//         int sum=0;
//         int min_sum=0;
//         for(int i=0;i<nums.size();i++){
//             pre_sum+=nums[i];
//             min_sum=min(min_sum,pre_sum);
//         }
//         // sort(data.begin(),data.end());
//         return -min_sum+1;
//     }
// };
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minVal = 0, total = 0;
        for (int num : nums) {
            total += num;
            minVal = min(minVal, total);
        }
        return -minVal + 1;
    }
};