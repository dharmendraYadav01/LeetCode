class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;

        for(int x:nums){
        if(x>max1){
            max2=max1;
            max1=x; // first max
        }
        else if(x>max2){
            max2=x; // second max
        }

        if(x<min1){
            min2=min1;
            min1=x; // first min
        }
        else if(x<min2){
            min2=x; //second min
        }
    }
        return (max1*max2)-(min1*min2);
        // sort(nums.begin(),nums.end());
        // int size=nums.size()-1;
        // int first=nums[0]*nums[1];
        // int second=nums[size]*nums[size-1];
        // return abs(second-first);
    }
};