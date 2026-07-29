class Solution {
public:
    int GetGap(string &res){
        int count=0;
        for(int i=0;i<res.length();i++){
            if(res[i]==' '){
                count++;
            }
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int max_gap=INT_MIN;
        for(auto it:sentences){
            int gap=GetGap(it);
            max_gap=max(gap,max_gap);
        }
        return max_gap+1;
    }
};