class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>result;
        int x=0;
        if(n%2!=0){
            x=n/2;
            for(int i=-x;i<=x;i++){
                result.push_back(i);
            }
        }
        else{
            int x=n/2;
            for(int i=-x;i<=x;i++){
                if(i==0){
                    continue;
                }else{
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};