class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int count=0;
        int flag=0;
        sort(banned.begin(),banned.end());
        for(int i=1;i<=n;i++){
            if(binary_search(banned.begin(),banned.end(),i)){
                continue;
            }
            if(count+i>maxSum){
                break;
            }
            count+=i;
            flag++;
        }
        
        return flag;
    }
};