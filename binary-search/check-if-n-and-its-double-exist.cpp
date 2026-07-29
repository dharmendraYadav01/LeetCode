class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==2*arr[j] && i!=j){
                    return true;
                }
                if(2*arr[i]==arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};