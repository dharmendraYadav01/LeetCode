class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_set<int>s1;
        for(int it:nums1){
            s1.insert(it);
        }
        unordered_set<int>s2;
        for(int it:nums2){
            s2.insert(it);
        }
        for(auto it:s1){
            for(auto i:s2){
                if(it==i){
                    res.push_back(it);
                }
            }
        }
        return res;        
    }
};