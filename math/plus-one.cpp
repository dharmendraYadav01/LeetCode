class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=1;
        for(int i=digits.size()-1;i>=0;i--){
            int sum = digits[i] + flag;
            digits[i]=sum%10;
            flag=sum/10;
        }
        if(flag>0){
            digits.insert(digits.begin(),flag);
        }
        return digits;
    }
};