class Solution {
public:
    int binaryGap(int n) {
        string res="";
        int temp=n;
        while(temp){
            res+=to_string(temp%2);
            temp/=2;
        }
        vector<int>fl;
        for(int i=0;i<res.length();i++){
            if(res[i]=='1'){
                fl.push_back(i);
            }
        }
        int sum=INT_MIN;
        for(int i=0;i<fl.size()-1;i++){
            sum=max(sum,abs(fl[i]-fl[i+1]));
        }
        return sum==INT_MIN?0:sum;
        
    }
};