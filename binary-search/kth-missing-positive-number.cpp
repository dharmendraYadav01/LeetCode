class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int missing=0;
        int current=1;
        while(true){
            if(i<arr.size() && arr[i]==current){
                i++;
            }
            else{
                missing++;
                if(missing==k){
                    return current;
                }
            }
            current++;
        }

        return current;
    }
};