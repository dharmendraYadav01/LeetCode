class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>newString;
        for(string &email:emails){
            string cleanEmail;
            for(char c:email){
                if(c=='+' || c=='@'){
                    break;
                }
                if(c=='.'){
                    continue;
                }
                cleanEmail+=c;
            }
            cleanEmail+=email.substr(email.find('@'));
            newString.insert(cleanEmail);
        }
       return newString.size();  
    }
};