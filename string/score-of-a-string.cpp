class Solution {
public:
    int scoreOfString(string s) {
        // Approch 1: using map
        // map<char,int>mp;
        // for(int i=0;i<s.size();i++){
        //     mp[i]=(int)s[i]; // here we store ascii code in map like we store frequency
        // }
        // Approch 2: using vector my favourite
        vector<int>result;
        for(int i=0;i<s.size();i++){
            result.push_back((int)s[i]);
        }
        int sum=0;
        for(int i=1;i<result.size();i++){
            sum+=abs(result[i-1]-result[i]);
        }
        return sum;
    }
};