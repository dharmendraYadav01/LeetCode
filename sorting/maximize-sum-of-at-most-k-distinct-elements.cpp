class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>st(nums.begin(),nums.end());
        vector<int>result;
        while(k-- && !st.empty()){
            int x=*prev(st.end());
            result.push_back(x);
            st.erase(prev(st.end()));
        }
        return result;
    }
};