class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int value=0;
        string res="";
        while(n>0){
            res+=to_string(n%2);
            n/=2;
        }
        reverse(res.begin(),res.end());
        vector<int>result;
        int len=res.size();
        for(int i=0;i<len;i++){
            if(res[i]=='1'){
                result.push_back(1<<(len-i-1));
            }
        }
        sort(result.begin(),result.end());
        const int MOD = 1e9 + 7;
        vector<int>temp;
        for(auto it:queries){
            int left=it[0];
            int right=it[1];
            long long mul=1;
            for(int i=left;i<=right;i++){
                mul*=result[i];
                mul%=MOD;
            }
            temp.push_back(mul);
        }
        return temp; 
    }
};