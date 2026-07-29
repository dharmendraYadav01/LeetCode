class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> s = arr;
        sort(s.begin(), s.end());
        int c = 0, ind = -1;
        for (int i = 0; i < arr.size(); i++) {
            ind = max(ind, int(find(s.begin(), s.end(), arr[i]) - s.begin()));
            if (ind == i) {
                c++;
            }
        }
        return c;
        // int n=arr.size();
        // if(is_sorted(arr.begin(),arr.end())){
        //     return 1;
        // }
        // stack<int>result(arr.begin(),arr.end());
        // int count=0;
        // while(!result.empty()){
        //     int num=result.top();
        //     result.pop();
        //     if(num>result.top()){
        //         count++;
        //     }
        //     count++;
        //     break;
        // }
        
        // return count;
    }
};