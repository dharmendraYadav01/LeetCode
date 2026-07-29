class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // map<int, pair<int, bool>> mp;
        // for (int i = 0; i < nums1.size(); i++) {
        //     if (!mp.count(nums1[i])) {
        //         mp[nums1[i]].first++;
        //         mp[nums1[i]].second = false;
        //     }
        // }
        // for (int i = 0; i < nums2.size(); i++) {
        //     if(!mp.count(nums2[i]){
        //         mp[nums2[i]].first++;
        //         mp[nums2[i]].second = true;
        //     }
        // }
        // for (auto it : mp) {
        //     if (it.second.first >= 2 && it.second.second == true)
        //         return it.first;
        // }
        map<int,int>mp;
        for(int i:nums1){
            mp[i]++;
        }
        for(int i:nums2){
            if(mp.count(i)) return i;
        }
        // unordered_set<int> st(nums1.begin(), nums1.end());
        // int i = 0;
        // while (i++ < nums2.size()) {
        //     if (!st.empty() && st.find(nums2[i]) != st.end())
        //         return nums2[i];
        // }
        return -1;
    }
};