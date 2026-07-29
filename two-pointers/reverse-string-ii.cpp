class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length();i+=2*k){
            if(s.size()-i<k) reverse(s.begin()+i,s.end());
            else reverse(s.begin()+i,s.begin()+k+i);
        }
        
        return s;
    }
};