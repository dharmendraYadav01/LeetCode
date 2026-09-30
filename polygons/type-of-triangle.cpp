class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first=nums[0];
        int sec=nums[1];
        int third=nums[2];
        if(first+sec<=third){
            return "none";
        }
        if(first==sec && sec==third){
            return "equilateral";
        }
        if(first==sec || sec==third || first==third){
            return "isosceles";
        }
        
        
        return "scalene";
    }
};