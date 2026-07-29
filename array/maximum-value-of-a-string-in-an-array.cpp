class Solution {
public:
    bool isAlldigit(string s){
        for(char c:s){
            if(!isdigit(c)){
                return false;
            }
        }
        return true;
    }
    int Getdig(string s){
        int sum=0;
        for(char c:s){
            sum=sum*10+(c-'0');
        }
        return sum;
    }
    int maximumValue(vector<string>& strs) {
        int sum=0;
        int ans=0;
        for(auto it:strs){
            if(isAlldigit(it)){
                sum=max(sum,Getdig(it));
            }
            else{
                int len=it.length();
                ans= max(ans,len);
            }
        }
        return max(ans,sum);
    }
};