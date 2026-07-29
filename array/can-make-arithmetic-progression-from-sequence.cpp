class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>result;
        for(int i=0;i<arr.size()-1;i++){
            result.push_back(abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<result.size()-1;i++){
            if(result[i]!=result[i+1]){
                return false;
            }
        }
        return true;
    }
};