class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        vector<int>num1;
        vector<int>num2;
        vector<int>num3;
        int size=nums.size();
        int i=1;
        while(i<size && nums[i] > nums[i - 1]){
            num1.push_back(nums[i-1]);
            i++;
        }
        if(num1.empty()) return false;
        num1.push_back(nums[i-1]);
        while(i<size && nums[i-1]>nums[i]){    
            num2.push_back(nums[i-1]); 
            i++;
        }
        if(num2.empty()) return false;
        num2.push_back(nums[i-1]);
        while(i<size && nums[i]>nums[i-1]){
            num3.push_back(nums[i-1]);
            i++;
        }
        if(num3.empty()) return false;
        num3.push_back(nums[i-1]);
        if(is_sorted(num1.begin(),num1.end()) && is_sorted(num2.rbegin(),num2.rend()) && is_sorted(num3.begin(),num3.end()) && i==size){
            return true;
        }
        return false;
    }
};