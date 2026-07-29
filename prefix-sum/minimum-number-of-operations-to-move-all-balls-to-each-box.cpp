class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>result(n,0);
        int prefixcount=0;
        int prefixsum=0;
        for(int i=0;i<n;i++){
            result[i]=prefixcount*i-prefixsum;
            if(boxes[i]=='1'){
                prefixcount++;
                prefixsum+=i;
            }
        }
        int suffixcount=0;
        int suffixsum=0;
        for(int i=n-1;i>=0;i--){
            result[i]+=suffixsum-suffixcount*i;
            if(boxes[i]=='1'){
                suffixcount++;
                suffixsum+=i;
            }
        }
        // first approach................
        // for(int i=0;i<n;i++){
        //     if(boxes[i]=='1'){
        //         for(int j=0;j<n;j++){
        //             result[j]+=abs(i-j); // kitne moves lagenge 1 ko every index par jane ko
        //         }
        //     }    
        // }
        return result;
    }
};