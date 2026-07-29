class Solution {
public:
    int minLengthAfterRemovals(string s) {
        string temp=s;
        int countA=0;
        int countB=0;
        for(auto c:s){
            if(c=='a') countA++;
            else countB++;
        }
        return abs(countA-countB);
    }
};