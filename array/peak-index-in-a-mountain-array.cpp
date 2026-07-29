class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int last=n;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(arr[mid]<arr[mid+1]){
                start= mid+1;
            }    
            else last=mid-1;
        }
        return start;
    }
};