class Solution {
public:
    bool common(vector<string>& strs,int len){
        string prefix=strs[0].substr(0,len);
        for(int i=1;i<strs.size();i++){
            if(strs[i].substr(0,len)!=prefix){
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        // if(strs.size()<=1){
        //     return strs[0];
        // }
        int minlen=strs[0].size();  
        for(const string &it:strs){
            minlen=min(minlen,(int)it.size());
        }
        int low =0;
        int high=minlen;
        while(low<high){
            int mid=low+(high-low+1)/2;
            if(common(strs,mid)){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        return strs[0].substr(0,low);
    }
};