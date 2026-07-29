class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s;
        for(int it:nums){
            s.insert(it);
        }
        int i=1;
        while(true){
            if(s.find(i)==s.end() && i%k==0){
                return i;
            }
            i++;
        }
        return -1;
    }
};