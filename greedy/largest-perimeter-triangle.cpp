class Solution {
public:
    // double isValid(int a,int b,int c){
    //     return (a+b>c) && (b+c>a) && (a+c>b);
    // }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        for(int i=2;i<nums.size();i++){
            if(nums[i-2]<nums[i-1]+nums[i]){
                return nums[i-2]+nums[i-1]+nums[i];
            }
        }
        return 0;
        // int para=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(isValid(nums[i],nums[j],nums[k])){
        //                 int val=nums[i]+nums[j]+nums[k];
        //                 para=max(para,val);
        //             }
        //         }
        //     }
        // }
        // return para;
    }
};