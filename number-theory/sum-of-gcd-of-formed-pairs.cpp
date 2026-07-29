class Solution {
public:
    // int gcd(int a,int b){
    //     while(a>0 && b>0){
    //         if(a>b){
    //             a=a%b;
    //         }else b=b%a;
    //     } 
    //     if(a==0) return b;
    //     return a;
    // }
    long long gcdSum(vector<int>& nums) {
        int mx = 0;
        vector<int> pfix(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            mx = max(nums[i], mx);
            pfix[i] = gcd(nums[i], mx);
        }
        sort(pfix.begin(), pfix.end());
        int i = 0;
        int j = pfix.size() - 1;
        long long sum = 0;
        while (i < j) {
            sum += gcd(pfix[i], pfix[j]);
            i++;
            j--;
        }
        return sum;
    }
};