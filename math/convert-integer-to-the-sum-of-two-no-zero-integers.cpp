class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int A=0,B=0;
        for(int i=1;i<n;i++){
            A=i;
            B=n-i;
            if(to_string(A).find('0') == string::npos && to_string(B).find('0') == string::npos){
                return {A,B};
            }
        }
        return {};
    }
};