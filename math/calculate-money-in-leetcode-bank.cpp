class Solution {
public:
    int totalMoney(int n) {
        int i = 0;
        int sum = 0;
        while (n > 0) {
            int count = 0;
            int x = i + 1;
            while (count < 7 && n > 0) {
                sum += x;
                x++;
                count++;
                n--;
                // cout<<n<<" ";
            }
            // cout<<sum<<endl;
            i++;
        }
        return sum;
    }
};