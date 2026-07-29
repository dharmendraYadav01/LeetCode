class Solution {
public:
    int minimumSum(int num) {
        vector<int>result;
        while(num!=0){
            result.push_back(num%10);
            num/=10;
        }
        sort(result.begin(),result.end());
        int n1=result[0]*10+result[3];
        int n2=result[1]*10+result[2];
        return n1+n2;
        
    }
};