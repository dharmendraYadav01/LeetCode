class Solution {
public:
    int maxPower(string s) {
        int max_=1;
        int count=1;
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
                count++;
                max_=max(count,max_);
            }else count=1; 
        }
        return max_;
    }
};