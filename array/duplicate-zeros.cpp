class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                i++;
            }
        }
        int new_n=arr.size();
        while(new_n>n){
            arr.pop_back();
            new_n--;
        }
    }
};