class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        for(int it:nums){
            if(it!=0){
                s.insert(it);
            }
        }
        return s.size();
    }
};