class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int>st;
        unordered_set<int>copy;
        for(int it:nums1){
            st.insert(it);
        }
        for(int it:nums2){
            st.insert(it);
        }
        for(int it:nums3){
            st.insert(it);
        }
        vector<int>result;
        for(int it:st){
            if(find(nums1.begin(), nums1.end(), it)!=nums1.end() && find(nums2.begin(), nums2.end(), it)!=nums2.end()){
                copy.insert(it);
            }     
            if(find(nums1.begin(), nums1.end(), it)!=nums1.end() && find(nums3.begin(), nums3.end(), it)!=nums3.end()){
                copy.insert(it);
            }     
            if(find(nums2.begin(), nums2.end(), it)!=nums2.end() && find(nums3.begin(), nums3.end(), it)!=nums3.end()){
                copy.insert(it);
            }     
        }
        return vector<int>(copy.begin(),copy.end());
    }
};