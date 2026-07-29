class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();  
        if(n<=0 || is_sorted(arr.begin(),arr.end())){
            return 0;
        }
        int left=0;
        while(arr[left]<=arr[left+1]){
            left++;
        }
        int right=n-1;
        while(arr[right-1]<=arr[right]){
            right--;
        }
        int ans=min(n-left-1,right);
        int i=0;
        int j=right;
        while(i<=left && j<n){
            if(arr[i]<=arr[j]){
                ans=min(ans,j -i-1);
                i++;
            }
            else j++;
        }
         return ans;
    }
};