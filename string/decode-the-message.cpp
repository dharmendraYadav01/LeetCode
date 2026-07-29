class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mp;
        int i='a';
        for(char c:key){
            if(c!=' ' && mp.find(c)==mp.end()){
                mp[c]=i;
                i++;
            }
        }
        string res="";
        for(int i=0;i<message.size();i++){
            if(message[i]!=' '){
                res+=mp[message[i]];
            }
            else{
                res+=' ';
            }
        }
        return res;
    }
};