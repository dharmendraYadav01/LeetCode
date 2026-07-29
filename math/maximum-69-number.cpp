class Solution {
public:
    int maximum69Number (int num) {
        vector<int>result;
        while(num>0){
            result.push_back(num%10);
            num/=10;
        }
        reverse(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            if(result[i]==6){
                result[i]=9;
                break;
                
            }else{
                continue;
            }
        }
        int res=0;
        for(int it:result){
            res=res*10+it;
        }
        return res;
        
    }
};