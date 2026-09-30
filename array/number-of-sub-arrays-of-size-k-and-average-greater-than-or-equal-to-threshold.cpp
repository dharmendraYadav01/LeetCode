class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt = 0;
        for (int i = 0; i <= arr.size()-k ; i++) {
            int sum = 0;
            int j=i;
            while (j<k+i) {
                sum += arr[j];
                j++;
            }
            // sum += arr[i];
            if (sum >= k * threshold) {
                cnt++;
                sum = 0;
            }
        }
        return cnt;
    }
};
// i<=5
//   2,2,2,2,5,5,5,8