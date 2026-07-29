class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>result;
        long long place=1;
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                result.push_back(1LL * rem*place);
            }
            place*=10;
            n/=10;
            
        }
        reverse(result.begin(),result.end());
        return result;
    }
};