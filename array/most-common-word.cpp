class Solution {
public:
    string tolower(string res){
        transform(res.begin(), res.end(), res.begin(), ::tolower);
        return res;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int>mp;
        int i=0;
        while(i<paragraph.length()){
            int j=i;
            string res="";
            while(j<paragraph.length() && paragraph[j]!=' '){
                if (isalpha(paragraph[j])) {
                    res += paragraph[j];
                }else{
                    break;
                }
                j++;
            }
            if (!res.empty()) { 
                res = tolower(res);
                mp[res]++;
            }
            i=j+1;
        }
        for(auto &it:banned){
            if(mp.count(it)!=0){
                mp[it]=0;
            }
        }
        int maxfreq = 0;
        string ans;
        for (auto &it : mp) {
            if (it.second > maxfreq) {
                maxfreq = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};