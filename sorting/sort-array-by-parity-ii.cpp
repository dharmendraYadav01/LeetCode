class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int size=nums.size();
        vector<int>result;
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<size;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int i=0;
        int j=0;
        while(i<even.size() && j<odd.size()){
            result.push_back(even[i]);
            result.push_back(odd[j]);
            i++;
            j++;
        }
        return result;
    }
};