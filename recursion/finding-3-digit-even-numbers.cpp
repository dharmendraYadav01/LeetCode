class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>result;
        set<int>s;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i!=j && j!=k && i!=k){
                        int num=digits[i]*100+digits[j]*10+digits[k];
                        if(num%2==0 && digits[i]!=0){
                            result.push_back(num);
                        }
                    } 
                }
            }
        }
        for(auto it:result){
            s.insert(it);
        }
        result.clear();
        for(auto it:s){
            result.push_back(it);
        }
        return result;
    }
};