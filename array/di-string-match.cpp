class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int>result;
        int i=0;
        int j=n;
        for(char c:s){
            if(c=='I'){
                result.push_back(i);
                i++;
            }else{
                result.push_back(j);
                j--;
            }
        }
        result.push_back(i);
        return result;
    }
};