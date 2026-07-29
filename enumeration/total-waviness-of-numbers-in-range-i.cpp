class Solution {
public:
    int wavi(int n){
        string s=to_string(n);
        int size=s.size();
        if(size<3) return 0;
        int cnt=0;
        for(int i=1;i<size-1;i++){
            int a=s[i-1];
            int b=s[i];
            int c=s[i+1];
            if(b>a && b>c) cnt++;
            else if(b<a && b<c) cnt++;
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            ans+=wavi(i);
        }
        return ans;
    }
};