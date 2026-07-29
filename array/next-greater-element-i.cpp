class Solution {
public:
    int find_Max(vector<int>&result,int idx){
        int val=result[idx];
        int count=0;
        for(int i=idx;i<result.size();i++){
            if(result[i]>val){
                count=result[i];
                break;
            }
        }
        return count==0?-1:count;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int count=0;
        for(int it:nums1){
            auto idx=find(nums2.begin(),nums2.end(),it);
            if(idx!=nums2.end()){
                count=find_Max(nums2,(idx-nums2.begin()));
            }
            result.push_back(count);
        }
        return result;
    }
};