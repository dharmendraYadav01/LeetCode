class Solution {
public:
    bool isPalindrome(string s, int k){
        int len=s.size();
        if(len==k){
            return true;
        }
        if(len<k){
            return false;
        }
        unordered_map<char,int>mp;
        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto it:mp){
            if((it.second)%2!=0){
                count++;
            }
        }
        if(count<=k){
            return true;
        }
        
        return false;
    }
    bool canConstruct(string s, int k) {
        if(isPalindrome(s,k)){
            return true;
        }
        return false;
    }
};