class Solution {
public:
    string bit(int n){
        string flag="";
        if(n==0){
            return "0";
        }
        while(n>0){
            flag+=to_string(n%2);
            n/=2;
        }
        reverse(flag.begin(),flag.end());
        return flag;
    }
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++){
            string res=bit(i);
            int count=0;
            for(auto it:res){
                if(it=='1'){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};