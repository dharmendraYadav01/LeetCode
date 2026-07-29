class Solution {
public:
    void fill(string s,vector<int>&num){
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ' && s[i]>='1' && s[i]<='9'){
                num.push_back(s[i]-'0');
            }
        }
    }
    string sortSentence(string s) {
        vector<int>num;
        fill(s,num);
        vector<string>alpha;
        for(int i=0;i<s.length();){
            if(s[i]==' '){
                i++;
                continue;
            }
            int j=i;
            string res="";
            while(j<s.length() &&((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z'))){
                res+=s[j];
                j++;
            }
            alpha.push_back(res);
            i=j+1;
        }
        vector<pair<string,int>>vec;
        for(int i=0;i<alpha.size();i++){
            vec.push_back({alpha[i],num[i]});
        }
        sort(vec.begin(),vec.end(),[&](auto &a,auto &b){
            return a.second<b.second;
        });
        vector<string>result;
        for(auto &it:vec){
            result.push_back(it.first);
            // cout<<it.first<<" "<<it.second<<endl;
        }
        string fool="";
        for(int i=0;i<result.size();i++){
            fool+=result[i];
            if(i!=result.size()-1){
                fool+=' ';
            }
        }
        return fool;
    }
};
