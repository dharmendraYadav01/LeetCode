class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            result[i]=prices[i];
            for(int j=i+1;j<n;j++){
                if(result[i]>=prices[j]){
                    result[i]-=prices[j];
                    break;
                }
                
            }
        }
        return result;
    }
};