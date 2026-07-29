class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        vector<int>result;
        int n=num.size();
        for(int i=n-1;i>=0 || k>0 || carry>0 ;i--){
            int sum=(i>=0?num[i]:0);
            int digit=sum+k%10+carry;
            carry=digit/10;
            k/=10;
            result.push_back(digit%10);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};