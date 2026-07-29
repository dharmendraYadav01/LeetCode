class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int r=((nums[i]%value)+value)%value;
            mp[r]++;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(mp[i%value]==0){
                return i;
            }
            mp[i%value]--;
        }
        return -1;
    }
};