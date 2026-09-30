class Solution {
public:
    int minLights(vector<int>& lights) {
        int n=lights.size();
        vector<int>diff(n+1,0);
        for(int i=0;i<n;i++){
            if(lights[i]>0){
                int v=lights[i];
                int l=max(0,i-v);
                int r=min(n-1,i+v);
                diff[l]++;
                if(r+1<n){
                    diff[r+1]--;
                }
            }
        }
        vector<int>visible(n,0);
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=diff[i];
            if(curr>0){
                visible[i]=1;
            }
        }
        int ans=0;
        int i=0;
        while(i<n){
            if(visible[i]){
                i++;
                continue;
            }
            int j=i;
            while(j<n && !visible[j]){
                j++;
            }
            int len=j-i;
            ans+=(len+2)/3; // becoz it cover at most i-1,i,i+1 pos
            i=j;
        }
        return ans;
    }
};