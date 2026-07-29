class Solution {
public:
    bool isValid(string s,string pattern){
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<pattern.size() && s[i]==pattern[j]){
                j++;
            }else if(isupper(s[i])) return false;
        }
        return j==pattern.size();
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>ans;
        for(auto it:queries){
            ans.push_back(isValid(it,pattern));
        }
        return ans;
    }
};