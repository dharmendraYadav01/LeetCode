class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int i=0;
        int n=candidates.size();
        int max_fre=0;
        // if(n<=1){
        //     return candidates[i];
        // }
        for(int i=0;i<32;i++){
            int freq=0;
            for(int& ele:candidates){
                if(ele & (1<<i))
                    freq++;
            }
            max_fre=max(max_fre,freq);
        }
        return max_fre;
        
    }
};