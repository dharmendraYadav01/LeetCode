class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>ferqs1(26,0);
        vector<int>ferqs2(26,0);
        for(char c:s1){
            ferqs1[c-'a']++;
        }
        for(int i=0;i<s1.length();i++){
            ferqs2[s2[i]-'a']++;
        }
        if(ferqs1==ferqs2){
            return true;
        }
        for(int i=s1.size();i<s2.size();i++){
            ferqs2[s2[i]-'a']++;
            ferqs2[s2[i-s1.size()]-'a']--;
            if(ferqs1==ferqs2){
                return true;
            }   
        }
        return false;
        // sort(s1.begin(),s1.end());
        // vector<string>result;
        // result.push_back(s1);
        // while(next_permutation(s1.begin(),s1.end())){
        //     result.push_back(s1);
        // }
        // for(auto it:result){
        //     if(s2.find(it)!=string::npos){
        //         return true;
        //     }
        // }
        // for(auto it:result){
        //     cout<<it<<" ";
        // }
        // return false;
    }
};