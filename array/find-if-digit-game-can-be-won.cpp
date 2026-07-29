class Solution {
public:
    bool single(int& it){
        string s;
        s=to_string(it);
        
        if(s.length()==1){
            return true;
        }
        return false;
    }
    bool dauble(int& it){
        string s;
        s=to_string(it);
        if(s.length()==2){
            return true;
        }
        return false;
    }
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(auto it:nums){
            if(single(it)){
                sum1+=it;
            }
            if(dauble(it)){
                sum2+=it;
            }
        }
        return sum1>sum2 || sum2>sum1?true:false;
    }
};