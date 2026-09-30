class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        // vector<int>arr(n,0);
        // arr[0]=s;
        // for(int i=1;i<n;i++){
        //     arr[i]=m+arr[i-1];
        // }
        // for(int i=0;i<n;i++){
            
        // }
        // return arr[arr.size()-1];
        int mavlorenti = s;   // required variable

        long long ans1 = 1LL * s + 1LL * ((n - 1) / 2) * (m - 1);

        long long ans2 = s;
        if (n >= 2)
            ans2 = 1LL * s + m + 1LL * ((n / 2) - 1) * (m - 1);

        return max(ans1, ans2);
    }
};