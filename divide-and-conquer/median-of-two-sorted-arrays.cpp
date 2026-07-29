class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }
            else{
                merge.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            merge.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            merge.push_back(nums2[j]);
            j++;
        }
        int start=0;
        int last=merge.size();
        int n=merge.size();
        int mid=0;
        if(n%2!=0){
            mid=(start+last)/2;
            return double(merge[mid]);
        }
        else{
            mid=(start+last)/2;
            return double(merge[mid]+merge[mid-1])/2;
        }
        
    }
};