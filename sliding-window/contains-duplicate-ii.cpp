class Solution {
public:
    // int arr[10001];
    // bool helper(vector<int>&nums,int k){
    //     int n=nums.size();
    //     if(arr[n]!=-1){
    //         return arr[n];
    //     }
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]==nums[j] && abs(i-j)<=k){
    //                 return arr[n]=true;
    //             }
    //         }
    //     }
    //     return arr[n]=false;
    // }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {  
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])){
                return true;
            }
            s.insert(nums[i]);
            if(s.size()>k){
            s.erase(nums[i-k]);
            }
        }
        return false;  
        
        // memset(arr,-1,sizeof(arr));
        // return helper(nums,k);
    }
};