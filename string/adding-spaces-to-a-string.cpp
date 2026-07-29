class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size();
        int m=spaces.size();
        int ls=0;
        int rsp=0;
        string res(n+m,' ');
        for(int i=0;i<n+m;i++){
            if(rsp<m && i==spaces[rsp]+rsp){
                rsp++;
            }
            else{
                res[i]=s[ls++];
            }
        }
        return res;
    }
};