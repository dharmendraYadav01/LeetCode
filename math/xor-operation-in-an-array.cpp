class Solution {
public:
    int xorOperation(int n, int start) {
        int i=0;
        int xor_=0;
        while(n-->0){
            xor_^=start+2*i;
            i++;
        }
        return xor_;
    }
};