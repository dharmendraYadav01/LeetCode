class Solution {
public:
    bool is_balanced(int x){
        vector<int>freq(10);
        // unordered_map<int,int>mp;
        while(x>0){
            int d=x%10;
            freq[d]++;
            x/=10;
        }
        for(int d=0;d<10;d++){
            if(freq[d]!=0 && freq[d]!=d){
                return false;
            }
        }
        return true;
        
    }
    int nextBeautifulNumber(int n) {
        // if(n==666666) return 1224444;
        // else if(n==666665) return 666666;
        int i=n+1;
        while(true){
            if(is_balanced(i)){
                return i;
            }
            i++;
        }
        return -1;
    }
};