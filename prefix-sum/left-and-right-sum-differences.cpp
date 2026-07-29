class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        vector<int>result;
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size()-1;i++){
            sum1+=nums[i];
            left[i+1]=sum1;
        }
        for(int j=n-1;j>0;j--){
            sum2+=nums[j];
            right[j-1]=sum2;
        }
        int i=0,j=0;
        while(i<left.size() && j<right.size()){
            result.push_back(abs(left[i]-right[j]));
            i++;
            j++;
        }
        return result;
    }
};