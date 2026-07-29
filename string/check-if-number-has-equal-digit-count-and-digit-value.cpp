class Solution {
public:
    bool digitCount(string num) {
        vector<int>res(10,0);
        for(auto it:num){
            res[it-'0']++;
        }
        for(int i=0;i<num.size();i++){
            if(res[i]!=(num[i]-'0')){
                return false;
            }
        }
        return true;
    }
};